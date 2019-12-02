note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create s.make_empty
			i := 0


			create class_list.make_empty
			count := class_list.count
			full := false

			create {JAVA_CODE_GENERATOR} pretty_printer.make
			create expr.make_empty

			create {INTEGER_CONSTANT} c1.make (0)
			create {INTEGER_CONSTANT} c2.make (0)
			create {INTEGER_CONSTANT} c3.make (0)

			create {BOOLEAN_CONSTANT} b1.make (false)
			create {BOOLEAN_CONSTANT} b2.make (false)
			create {BOOLEAN_CONSTANT} b3.make (false)

			create {ADDITION} e.make (c1,c2)

			create c_chain.make_empty
			create op.make_empty
			create op2.make_empty

			create att_name.make_empty
			create an.make_empty
			create assignment_instruction.make_empty
			create stored_expression.make_empty
			create java_code.make_empty

		end

feature -- model attributes
	s : STRING
	i : INTEGER
	class_list : ARRAY[MY_CLASS]
	count, val : INTEGER
	full: BOOLEAN
	pretty_printer : VISITOR
	expr, op, op2 : STRING
	c1,c2,c3,b1,b2,b3, e : EXPRESSION
	c_chain, stored_expression : ARRAY[STRING]
	att_name, an, assignment_instruction, java_code: STRING

feature -- model operations
	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make

		end
	add_class (nc: STRING)
		do
			class_list.force (create {MY_CLASS}.make (nc), count + 1) -- adds the class `nc` to the `class_list`
			count := count + 1
		end
	add_query(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		do
			across
				class_list is cl
			loop
				if
					cl.name ~ cn
				then
					cl.add_query(fn, ps, rt)
				end
			end
		end
	add_attribute (cn: STRING; fn: STRING; ft: STRING)
		do
			across
				class_list is cl
			loop
				if
					cl.name ~ cn
				then
					cl.add_attribute(fn, ft)
--					c_chain.force (fn,c_chain.count+1) -- adding attribute of the class to the call_chain array for later use
				end
			end
		end

	add_command(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		do
			across
				class_list is cl
			loop
				if
					cl.name ~ cn
				then
					cl.add_command(fn, ps)
				end
			end
		end

	add_assignment_instruction(cn: STRING ; fn: STRING ; n: STRING)
			-- this is not really working at the moment
			-- changed check attached to if attached... this might work, have to test
		local
			q : QUERY_FEATURE
			c : COMMAND_FEATURE
		do
			stored_expression.force (expr, stored_expression.count+1)
			op := ""
			op2 := ""
			val := 0
			expr := ""
			full := false
			across
				class_list is cl
			loop
				if attached {QUERY_FEATURE} cl.get_query_feature(fn) as q1
				then
					q := q1
					q.set_rt(n)
				end


				if attached {COMMAND_FEATURE} cl.get_command_feature(fn) as comm
				then
					c := comm
					-- c.set_rt(n) don't know what to set it as ( A -> set_i -> i := ?)
					c.set_expr ( n + " := ")
					att_name := fn
					an := n
					assignment_instruction := "Routine currently being implemented: {" + cl.name + "}." + fn
				end
			end
		end

	bool_value (b: BOOLEAN) -- adds `bool` to assignment_instruction
		local
			operation : EXPRESSION

		do

		end

	int_value (int: INTEGER) -- adds `int` to assignment_instruction
		local
			operation : EXPRESSION

		do
			-- ADDITION
			if op ~ "+" then

				if attached {INTEGER_CONSTANT} c1 as cons then

					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end

						create {ADDITION} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {ADDITION} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- END ADDITION

			-- MULTIPLICATION
			if op ~ "*" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {MULTIPLICATION} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {MULTIPLICATION} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- END MULTIPLICATION

			-- SUBTRACTION
			if op ~ "-" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int -- used for output
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {SUBTRACTION} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {SUBTRACTION} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- END SUBTRACTION

			-- QUOTIENT
			if op ~ "/" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int -- used for output
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {QUOTIENT} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {QUOTIENT} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- END QUOTIENT

			-- MODULO
			if op ~ "%%" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int -- used for output
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {MODULO} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {MODULO} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- END MODULO

			-- GREATER THAN
			if op ~ ">" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int -- used for output
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {GREATER_THAN} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {GREATER_THAN} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- end GREATER_THAN

			-- LESS_THAN
			if op ~ "<" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int -- used for output
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {LESS_THAN} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {LESS_THAN} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- end LESS_THAN

			-- EQUALS
			if op ~ "==" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int -- used for output
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {EQUALS} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {EQUALS} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- end EQUALS

			-- DISJUNCTON
			if op ~ "||" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int -- used for output
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {DISJUNCTION} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {DISJUNCTION} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- end DISJUNCTION

			-- CONJUNCTION
			if op ~ "&&" then
				if attached {INTEGER_CONSTANT} c1 as cons then
					if cons.value > 0 then
						if attached {INTEGER_CONSTANT} c2 as cons1 then
							if cons1.value > 0 then -- if cons1 value = 2
								create {INTEGER_CONSTANT} c3.make (int)
								val := int -- used for output
							else
								create {INTEGER_CONSTANT} c2.make (int)
							end
						end
						create {CONJUNCTION} operation.make (c1, c2)
						create {JAVA_CODE_GENERATOR} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {CONJUNCTION} operation.make (c1, c2)
				create {JAVA_CODE_GENERATOR} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {JAVA_CODE_GENERATOR} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {JAVA_CODE_GENERATOR} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
			end
			-- end CONJUNCTION
		end

	add_call_chain (call_chain: ARRAY[STRING])
			-- `call_chain` is an array that stores the attributes of the class and also the parameters of commands
		do
			c_chain.force(call_chain[1], c_chain.count+1)
			if op ~ "+" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " + ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " + (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " + (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "+"

			if op ~ "-" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " - ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " - (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " - (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "-"

			if op ~ "*" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " * ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " * (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " * (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "*"

			if op ~ "/" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " / ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " / (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " / (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "/"

			if op ~ "%%" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " %% ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " %% (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " %% (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "%"

			if op ~ "&&" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " && ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " && (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " && (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "&&"

			if op ~ "||" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " || ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " || (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " || (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "||"

			if op ~ "==" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " == ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " == (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " == (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "=="

			if op ~ ">" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " > ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " > (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " > (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ ">"

			if op ~ "<" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " < ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " < (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "))"
						stored_expression.force(expr, stored_expression.count + 1)
					else

						expr := an + " := (" + c_chain[1] + " < (" + c_chain[2] + " " + op2 + " ?))"

					end
				end
			end -- end op ~ "<"
		end

	-- NUMERICAL OPERANDS
	addition
		local
			str : STRING
		do
			if op.is_empty then
				op := "+"
			else
				op2 := "+"
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? + nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " + nil)"

			end
		end

	multiplication
		local
			str : STRING
		do
			if op.is_empty then
				op := "*"
			else
				op2 := "*"
			end

			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? * nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " * nil)"
			end
		end

	quotient
		local
			str : STRING
		do
			if op.is_empty then
				op := "/"
			else
				op2 := "/"
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? / nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " / nil)"
			end
		end

	subtraction
		local
			str : STRING
		do
			if op.is_empty then
				op := "-"
			else
				op2 := "-"
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? - nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " - nil)"
			end
		end

	modulo
		local
			str : STRING
		do
			if op.is_empty then
				op := "%%"
			else
				op2 := "%%"
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? %% nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " %% nil)"
			end
		end
	-- BOOLEAN OPERANDS
	conjunction
		local
			str : STRING
		do
			if op.is_empty then
				op := "&&"
			else
				op2 := "&&"
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? && nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " && nil)"
			end
		end

	disjunction
		local
			str : STRING
		do
			if op.is_empty then
				op := "||"
			else
				op2 := "||"
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? || nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " || nil)"
			end
		end

	equals
		local
			str : STRING
		do
			if op.is_empty then
				op := "=="
			else
				op2 := "=="
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? == nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " == nil)"
			end
		end

	greater_than
		local
			str : STRING
		do
			if op.is_empty then
				op := ">"
			else
				op2 := ">"
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? > nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " > nil)"
			end
		end

	less_than
		local
			str : STRING
		do
			if op.is_empty then
				op := "<"
			else
				op2 := "<"
			end
			if expr.is_empty then
				across
					class_list is cl
				loop

					if attached {COMMAND_FEATURE} cl.get_command_feature(att_name) as comm
					then
						expr := comm.get_expr

					end
				end
				expr := expr + "(? < nil)"
			else
				str := expr.substring (1,5)
				expr := expr.substring (6, expr.count)
				expr := str + "(" + expr + " < nil)"
			end
		end

	-- NEGATION OPERATIONS

	numerical_negation
		do

		end

	logical_negation
		do

		end

	-- TYPE CHECK

	type_check
		do

		end

	-- JAVA CODE

	generate_java_code
		local
			looper : INTEGER
		do
			looper := 1
			across
				class_list is cl
			loop
				java_code.append("  ")
				java_code.append ("class ")
				java_code.append (cl.name)
				java_code.append (" {%N")
				if cl.attr_count > 0 then
					across cl.attribute_list is attr loop
						check attached {ATTRIBUTE_FEATURE} attr as att then
							java_code.append ("    ")
							if att.type ~ "INTEGER" then
								java_code.append ("int " + att.name + ";")
							else
								java_code.append ("bool " + att.name + ";")
							end
							java_code.append("%N")
						end
					end
				end -- end cl.attr_count

				if cl.command_count > 0 then -- printing the command features
					across cl.command_list is command loop
						check attached {COMMAND_FEATURE} command as c then
							java_code.append ("    void ")
							java_code.append (c.name + "(")
							across c.param is comm loop
								check attached {TUPLE[pn: STRING; ft: STRING]} comm as co then
									if co.ft ~ "INTEGER" then
										java_code.append("int " + co.pn)
									else
										java_code.append("bool " + co.pn)
									end
									if looper = c.param.count then

									else
										java_code.append(", ")
									end
									looper := looper + 1 -- used for ","
								end
							end -- end across c.param

							java_code.append(") {")
						end
					end
					across
						1 |..| stored_expression.upper is store
					loop
						java_code.append ("      ")

						java_code.append (stored_expression[store])
						if store > 1 then
							java_code.append(";")
						end
						if store = stored_expression.upper then
							java_code.append ("%N")
							java_code.append ("    ")
							java_code.append ("}")
						else
							java_code.append ("%N")
						end
					end

				end -- end cl.command_count


				java_code.append ("%N")
				java_code.append ("  ")
				java_code.append ("}")
			end
		end
feature -- queries
	out : STRING
		local
			looper : INTEGER
		do
			looper := 1
			create Result.make_empty

			if java_code.is_empty then
				if count > 0 then
					Result.append ("  ")
					Result.append ("Status: OK.%N")
					Result.append("  Number of classes being specified: ")
					Result.append(count.out)
					Result.append("%N")
					across
						 class_list is cl
					loop
						Result.append("    "+ cl.name +"%N")
						Result.append("      ")
						Result.append("Number of attributes: " + cl.attr_count.out +"%N")
						if cl.attr_count > 0 then -- printing the attribute
							across cl.attribute_list is attr loop
								check attached {ATTRIBUTE_FEATURE} attr as att then
									Result.append("        + ")
									Result.append(att.name)
									Result.append(": ")
									Result.append (att.type)
									Result.append("%N")
								end
							end
						end
						Result.append("      ")
						Result.append("Number of queries: " + cl.query_count.out+ "%N")
						if cl.query_count > 0 then -- printing the query features
							across cl.query_list is query loop
								check attached {QUERY_FEATURE} query as q then
									Result.append("        + ")
									Result.append(q.name)
									Result.append("(")
									across q.param is par loop
										check attached {TUPLE[pn: STRING; ft: STRING]} par as p then
											Result.append(p.ft)
										end
									end
									Result.append("): ")
									Result.append(q.return_type)
									Result.append("%N")
								end
							end
						end
						Result.append("      ")
						Result.append("Number of commands: " + cl.command_count.out + "%N")
						if cl.command_count > 0 then -- printing the command features
							across cl.command_list is command loop
								check attached {COMMAND_FEATURE} command as c then
									Result.append("        + ")
									Result.append(c.name)
									Result.append("(")
									across c.param is comm loop
										check attached {TUPLE[pn: STRING; ft: STRING]} comm as co then
											Result.append(co.ft)
											if looper = c.param.count then

											else
												Result.append(", ")
											end
											looper := looper + 1
										end
									end
									Result.append(")")

								end
							end
						end
						                                                                                                                                                                                                                                                                                                       end
						if assignment_instruction.is_empty then

						elseif val > 0 or full then

						else
							Result.append("%N")
							Result.append("  ")
							Result.append (assignment_instruction)
							Result.append("%N")
							Result.append("  ")
							if expr.is_empty then
								Result.append("Assignment being specified: "+an +" := ?")
							else
								Result.append("Assignment being specified: " + expr)
							end
						end
				end
			else
				Result.append(java_code)
			end
		end

invariant
	same_count: count = class_list.count
end




