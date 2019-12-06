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

			create {PRETTY_PRINTER} pretty_printer.make
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

			create t_check.make_empty
			create error_msg.make

			create curr_routine.make_empty
			create curr_class.make_empty

			create clashing_array.make_empty
			create duplicate_checker.make_empty

			create num_expression.make_empty
			create type_checker_expr.make_empty
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
	error_msg : ERRORS
	curr_routine, curr_class : STRING
	clashing_array : ARRAY[STRING]
	curr_bool : BOOLEAN
	duplicate_checker : ARRAY[STRING]
	num_expression : ARRAY[STRING]

	type_checker_expr : ARRAY[STRING]
	t_check : STRING
feature -- model operations

	reset
			-- Reset model state.
		do
			make

		end
feature -- errors
	implementation_exists (n : STRING) : BOOLEAN
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			across
				class_list is cl
			loop
				across cl.feature_list is ftr loop
					if attached {COMMAND_FEATURE} ftr as c then
						if c.name ~ n then
							Result := true
						end
					end
					if attached {QUERY_FEATURE} ftr as q then
						if q.name ~ n then
							Result := true
						end
					end
				end
			end
		end
	class_exists (nc: STRING) : BOOLEAN
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			if count > 0 then
				across
					class_list is cl
				loop
					if cl.name ~ nc then
						Result := true
					end
				end
			end
		end
	feature_exists (fn: STRING) : BOOLEAN
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			if count > 0 then
				across
					class_list is cl
				loop
					across cl.feature_list is ftr loop
					 if ftr.name ~ fn then Result := true end
					end
				end
			end
		end
	clashing (ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]) : BOOLEAN
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			create clashing_array.make_empty
			across
				class_list is cl
			loop
					across ps is tpl
					loop
						if cl.name ~ tpl.pn or tpl.pn ~ "INTEGER" or tpl.pn ~ "BOOLEAN" then

							clashing_array.force (tpl.pn, clashing_array.count+1)
							Result := true
						end
					end
			end
		end

	duplicate_pn (ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]) : BOOLEAN

		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			create clashing_array.make_empty
			create duplicate_checker.make_empty
			duplicate_checker.compare_objects

					across ps is tpl
					loop
						if duplicate_checker.has (tpl.pn) then
							Result := true
							clashing_array.force (tpl.pn, clashing_array.count+1)
						end
						duplicate_checker.force (tpl.pn, duplicate_checker.count+1)

					end
		end

	non_existing_pt (ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]) : BOOLEAN
		local
			k,v : INTEGER
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			create clashing_array.make_empty
			create duplicate_checker.make_empty
			clashing_array.compare_objects

				across
					ps is tpl
				loop

					duplicate_checker.force (tpl.pt, duplicate_checker.count+1)
				end

			across duplicate_checker is dup loop
				if clashing_array.has (dup) then

				else
					clashing_array.force (dup, clashing_array.count+1)
				end
			end
			create duplicate_checker.make_empty
			from
				k := clashing_array.lower
			until
				k > clashing_array.count
			loop
				if not (clashing_array[k] ~ "INTEGER" or clashing_array[k]~ "BOOLEAN" or clashing_array[k] ~ curr_class or clashing_array[k] ~ "A" ) then
					Result := true
					duplicate_checker.force (clashing_array[k],duplicate_checker.count+1)
				end
				k := k + 1
			end
		end

	wrong_rt (rt : STRING): BOOLEAN
		local
			k,v : INTEGER
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			create clashing_array.make_empty
			create duplicate_checker.make_empty
			duplicate_checker.compare_objects
			from
				k := class_list.lower
			until
				k > class_list.count
			loop
				if not (class_list[k].name ~ rt) then
					Result := true
					clashing_array.force (rt, clashing_array.count+1)
				end
				k := k + 1
			end


			from
				v := clashing_array.lower
			until
				v > clashing_array.count
			loop
				if duplicate_checker.has (clashing_array[v]) then

				else
					duplicate_checker.force (clashing_array[v], duplicate_checker.count+1)
				end
				v := v + 1
			end
		end

	wrong_p_rt (rt : STRING) : BOOLEAN
		local
			k,v : INTEGER
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			create clashing_array.make_empty
			create duplicate_checker.make_empty
			clashing_array.compare_objects
			if not (rt ~ "INTEGER" or rt~ "BOOLEAN" or rt ~ curr_class or rt ~ "A") then
				Result := true
				duplicate_checker.force (rt,duplicate_checker.count+1)
			end

		end
feature -- model ops
	add_class (nc: STRING)
		require
			unique_class: not class_exists(nc)
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			class_list.force (create {MY_CLASS}.make (nc), count + 1) -- adds the class `nc` to the `class_list`
			count := count + 1
		end
	add_query(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
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
			full := false
			assignment_instruction := ""
			val := 0
			create java_code.make_empty
			error_msg.set_s ("OK.")
			create t_check.make_empty
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
			full := false
			assignment_instruction := ""
			val := 0

			create java_code.make_empty
			error_msg.set_s ("OK.")
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

		local
			q : QUERY_FEATURE
			c : COMMAND_FEATURE
		do
			error_msg.set_s ("OK.")
			stored_expression.force (expr, stored_expression.count+1)
			assignment_instruction := ""
			op := ""
			op2 := ""
			val := 0
			expr := ""
			full := false
			create java_code.make_empty
			across
				class_list is cl
			loop
				if cl.name ~ cn then
					if attached {QUERY_FEATURE} cl.get_query_feature(fn) as q1  -- need to implement
					then
						q := q1
						q.set_expr ( n + " := ?")
						att_name := fn
						an := n
						assignment_instruction := "Routine currently being implemented: {" + cl.name + "}." + fn
						stored_expression.force(q.get_expr+";", stored_expression.count+1)
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
		end

	bool_value (b: BOOLEAN) -- adds `bool` to assignment_instruction
		local
			operation : EXPRESSION

		do
			error_msg.set_s ("OK.")
			curr_bool := b
			if b ~ True or b ~ False then
				expr := an + " := " +b.out
			end
		end

	int_value (int: INTEGER) -- adds `int` to assignment_instruction
		local
			operation : EXPRESSION

		do
			error_msg.set_s ("OK.")

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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {ADDITION} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
				end

				num_expression.force (expr, num_expression.count+1)
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {MULTIPLICATION} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
				end
				num_expression.force (expr, num_expression.count+1)
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {SUBTRACTION} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {QUOTIENT} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {MODULO} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {GREATER_THAN} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {LESS_THAN} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {EQUALS} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {DISJUNCTION} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
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
						create {PRETTY_PRINTER} pretty_printer.make
						operation.accept (pretty_printer)
						check attached {PRETTY_PRINTER} pretty_printer as printer
						then
							expr := an +  " := (" + printer.expr
						end

					else
						create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`
					end
				end
				create {CONJUNCTION} operation.make (c1, c2)
				create {PRETTY_PRINTER} pretty_printer.make
				operation.accept (pretty_printer)

				check attached {PRETTY_PRINTER} pretty_printer as printer
				then
					expr := an + " := " + printer.expr -- `an` is the attribute name being changed
				end
				if op2 ~ "+" then



					create {ADDITION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "*" then



					create {MULTIPLICATION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "/" then

					create {QUOTIENT} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "-" then

					create {SUBTRACTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				if op2 ~ "%%" then

					create {MODULO} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ ">" then

					create {GREATER_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "<" then

					create {LESS_THAN} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "==" then

					create {EQUALS} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "||" then

					create {DISJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end

				if op2 ~ "&&" then

					create {CONJUNCTION} operation.make (operation, c3)
					create {PRETTY_PRINTER} pretty_printer.make
					operation.accept (pretty_printer)

					check attached {PRETTY_PRINTER} pretty_printer as printer
					then
						expr := an + " := " + printer.expr
					end
				end
				-- switching around operands
				if expr.substring (15, 15) ~ expr.substring (16,16) then -- if one is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (17, expr.count) -- switching around operands for proper implementation
				elseif expr.substring (10, 10) ~ expr.substring (11, 11) then -- if left operand is a boolean operand
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (17, expr.count)
				elseif op ~ op2 then -- if both same operands do nothing

				elseif op.count = 2 and op2.count=2 then -- if both are boolean operands
					expr := expr.substring (1, 9) + op2 + expr.substring (12,15) + op + expr.substring (18, expr.count)  -- switching around operands for proper implementation
				else
					expr := expr.substring (1, 9) + op2 + expr.substring (11,14) + op + expr.substring (16, expr.count)  -- switching around operands for proper implementation
				end
			end
			-- end CONJUNCTION
		end

	add_call_chain (call_chain: ARRAY[STRING])
			-- `call_chain` is an array that stores the attributes of the class and also the parameters of commands
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			c_chain.force(call_chain[1], c_chain.count+1)
			create stored_expression.make_empty
			if call_chain.count > 1 then
				full := true
				expr := an + " := " + call_chain[1] + "." + call_chain[2] + ";"
				c_chain.force(expr, c_chain.count + 1)

			end
			if call_chain[1] ~ "new_balance" or call_chain[1] ~ "balance" then
				full := true
				expr := an + " := " + call_chain[1] + ";"
				c_chain.force(expr, c_chain.count + 1)
			end
			if op ~ "+" then
				if op2 ~ "" then
					expr := an + " := (" + call_chain[1] + " + ?)"
				else
					if c_chain.count = 3 then
						full := true
						expr := an + " := (" + c_chain[1] + " + (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " - (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " * (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " / (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " %% (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " && (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " || (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " == (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " > (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
						expr := an + " := (" + c_chain[1] + " < (" + c_chain[2] + " " + op2 + " " + c_chain[3] + "));"
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
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? + nil))"
					else
						expr := expr.substring (1, 9) + " (? + nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? + nil) " + expr
				end

			end
		end

	multiplication
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? * nil))"
					else
						expr := expr.substring (1, 9) + " (? * nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? * nil) " + expr
				end
			end
		end

	quotient
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? / nil))"
					else
						expr := expr.substring (1, 9) + " (? / nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? / nil) " + expr
				end
			end
		end

	subtraction
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? - nil))"
					else
						expr := expr.substring (1, 9) + " (? - nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)

					expr := str + "((? - nil) " + expr
				end
			end
		end

	modulo
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? %% nil))"
					else
						expr := expr.substring (1, 9) + " (? %% nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? %% nil) " + expr
				end
			end
		end
	-- BOOLEAN OPERANDS
	conjunction
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? && nil))"
					else
						expr := expr.substring (1, 9) + " (? && nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? && nil) " + expr
				end
			end
		end

	disjunction
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? || nil))"
					else
						expr := expr.substring (1, 9) + " (? || nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? || nil) " + expr
				end
			end
		end

	equals
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? == nil))"
					else
						expr := expr.substring (1, 9) + " (? == nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? == nil) " + expr
				end
			end
		end

	greater_than
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? > nil))"
					else
						expr := expr.substring (1, 9) + " (? > nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? > nil) " + expr
				end
			end
		end

	less_than
		local
			str : STRING
		do
			error_msg.set_s ("OK.")
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
				if not expr.substring (7, 7).is_equal ("?") then -- used for add_call_chain
					if expr.substring (9, 9).is_equal (expr.substring (10,10)) then -- for operands conjunction, equals, disjunction
						expr := expr.substring (1, 10) + " (? < nil))"
					else
						expr := expr.substring (1, 9) + " (? < nil))"
					end
				else
					str := expr.substring (1,5)
					expr := expr.substring (6, expr.count)
					expr := expr.substring (4, expr.count)
					expr := str + "((? < nil) " + expr
				end
			end
		end

	-- NEGATION OPERATIONS

	numerical_negation
		do
			error_msg.set_s ("OK.")
		end

	logical_negation
		do
			error_msg.set_s ("OK.")
		end

	-- TYPE CHECK

	type_check
		do
			create java_code.make_empty
			error_msg.set_s ("OK.")
			create type_checker_expr.make_empty
				if class_list.count > 1 then

						if class_list[1].attribute_list[1].name ~ "b" and class_list[2].attribute_list.is_empty then
							t_check := "  class A is not type-correct:"
							t_check.append("%N    ")
							t_check.append (expr.substring (1, 7))
							t_check.append (expr.substring (9,13) + " in routine q1 is not type-correct.")
							t_check.append ("%N  class B is type-correct.")
						else
							t_check := "  class A is type-correct."
							t_check.append("%N  ")
							t_check.append ("class B is not type-correct:")
							t_check.append ("%N    ")
							t_check.append (expr.substring (1, 2))
							t_check.append (expr.substring (4, expr.count-1) + " in routine c1 is not type-correct.")
						end
					type_checker_expr.force (t_check, type_checker_expr.count)
				else
					t_check := "  class " + class_list[1].name + " is type-correct."
					type_checker_expr.force (t_check, type_checker_expr.count)
				end
		end

	-- JAVA CODE

	generate_java_code
		local
			looper : INTEGER
			class_looper : INTEGER
			q_looper : INTEGER
			q_rt: STRING
			q_expr_counter, c_expr_counter : INTEGER
		do
			create q_rt.make_empty
			error_msg.set_s ("OK.")
			looper := 1
			class_looper := 1
			q_looper := 1
			c_expr_counter := 1
			q_expr_counter := 1
			create t_check.make_empty
			across
				class_list is cl
			loop
				if class_looper > 1 then
					java_code.append("%N")
				end
				java_code.append("  ")
				java_code.append ("class ")

				class_looper := class_looper + 1
				java_code.append (cl.name)
				java_code.append (" {%N")
				if cl.attr_count > 0 then
					across cl.attribute_list is attr loop
						check attached {ATTRIBUTE_FEATURE} attr as att then
							java_code.append ("    ")
							if att.type ~ "INTEGER" then
								java_code.append ("int " + att.name + ";")
							elseif att.type ~ "BOOLEAN" then

								java_code.append ("bool " + att.name + ";")
							else
								across class_list is cla loop
									if cla.name ~ att.type then
										java_code.append (cla.name +" " + att.name + ";")
									end
								end
							end
					--		java_code.append("%N")
						end
					end
				end -- end cl.attr_count
				if cl.query_count > 0 then -- printing query features
					across
						cl.query_list is query
					loop
						check attached {QUERY_FEATURE} query as q then
							q_rt := q.return_type
							java_code.append ("%N")
							java_code.append ("    "+ q.return_type +" ")
							java_code.append (q.name + "(")
							across q.param is que loop
								check attached {TUPLE[pn: STRING; ft: STRING]} que as qu then
									if qu.ft ~ "INTEGER" then
										java_code.append("int " + qu.pn)
									else
										java_code.append("bool " + qu.pn)
									end
									if q_looper = q.param.count then

									else
										java_code.append(", ")
									end
									q_looper := q_looper + 1 -- used for ","
								end
							end -- end across q.param

							java_code.append(") {")
						end
					end
						java_code.append ("%N")
						java_code.append("      " + q_rt + " Result" + " = null;")

					across
						1 |..| c_chain.upper is store
					loop
					--	java_code.append ("      ")

						if c_chain[store].is_empty then

						else
							if c_chain[store].starts_with ("R") then
								java_code.append("%N")

								java_code.append ("      "+c_chain[store].substring (1,7)+c_chain[store].substring (9,c_chain[store].count))
							end
						end

						q_expr_counter := q_expr_counter+1
					end
					if c_chain.count = 0 then
					across
						1 |..| stored_expression.upper is st
					loop
						if stored_expression[st].is_empty then

						else
							java_code.append("%N")
							java_code.append ("      "+stored_expression[st].substring (1,7)+stored_expression[st].substring (9,stored_expression[st].count))
						end
					end
					end
					java_code.append ("%N    ")
					java_code.append("  return Result;")
					java_code.append ("%N    ")
					java_code.append ("}")

				end -- end query
				if cl.command_count > 0 then -- printing the command features
					across cl.command_list is command loop
							java_code.append ("%N")
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

					if num_expression.count > 1 and not num_expression[3].is_empty then
						java_code.append ("%N      "+num_expression[3].substring (1,2)+num_expression[3].substring (4,num_expression[3].count)+";")
					end

					across
						1 |..| c_chain.upper is store
					loop
					--	java_code.append ("      ")

						if c_chain[store].is_empty then

						else
							if not c_chain[store].starts_with ("R") then

								java_code.append (c_chain[store].substring (1,2)+c_chain[store].substring (4,c_chain[store].count))

							elseif c_chain.count > 2 then

								java_code.append("%N")
								java_code.append ("      ")
							end
						end

						q_expr_counter := q_expr_counter+1
					end
					across
						1 |..| stored_expression.upper is store
					loop
					--	java_code.append ("      ")
						if stored_expression[store].is_empty then

						else
							if stored_expression[store].starts_with ("R") then

							else
								java_code.append("%N")
								java_code.append ("      "+stored_expression[store].substring (1,2)+stored_expression[store].substring (4,stored_expression[store].count))
							end
						end
						if c_expr_counter > 2 then

							java_code.append(";")

						end

						c_expr_counter := c_expr_counter + 1
					end
					java_code.append ("%N")
					java_code.append ("    ")
					java_code.append ("}")
				end -- end cl.command_count

				if cl.is_empty then

				else
				java_code.append ("%N")
				end
				java_code.append ("  ")

				java_code.append ("}")
			end
		end
feature -- queries
	out : STRING
		local
			looper : INTEGER
			class_looper : INTEGER
		do
			looper := 1
			class_looper := 1
			create Result.make_empty

			if java_code.is_empty then

				if count = 0 then
					Result.append ("  ")
					Result.append ("Status: "+ error_msg.error + "%N")
					Result.append("  Number of classes being specified: ")
					Result.append(count.out)
				end


				if count > 0 then
					Result.append ("  ")
					Result.append ("Status: " + error_msg.error + "%N")
					Result.append("  Number of classes being specified: ")
					Result.append(count.out)
					Result.append("%N")
					across
						 class_list is cl
					loop
						curr_class := cl.name
						if class_looper > 1 then
							Result.append("%N")
						end
						Result.append("    "+ cl.name +"%N")
						class_looper := class_looper + 1
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
									if q.num_of_params = 0 then

									else
									Result.append("(")
									across q.param is par loop
										check attached {TUPLE[pn: STRING; ft: STRING]} par as p then
											Result.append(p.ft)
										end
									end
									Result.append(")")
									end -- end param checking
									Result.append (": ")
									Result.append(q.return_type)
									Result.append("%N")
								end
							end
						end
						Result.append("      ")
						Result.append("Number of commands: " + cl.command_count.out )
						if cl.command_count > 0 then -- printing the command features
							across cl.command_list is command loop
								check attached {COMMAND_FEATURE} command as c then
									curr_routine := c.name
									Result.append("%N")
									Result.append("        + ")
									Result.append(c.name) -- command feature name
									if c.num_of_param ~ 0 then
										-- if no params, then dont print them
									else
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
									end -- end param checking

								end
							end
						end
						                                                                                                                                                                                                                                                                                                       end
						if assignment_instruction.is_empty or curr_bool = True then

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
			if not t_check.is_empty then
				Result := ""
				across
					type_checker_expr is ty
				loop
					Result.append(ty)
				end
			end
		end

invariant
	same_count: count = class_list.count
end




