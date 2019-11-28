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
			status := TRUE

			create {JAVA_CODE_GENERATOR} v.make
			create expr.make_empty

			create {INTEGER_CONSTANT} c1.make (0)
			create {INTEGER_CONSTANT} c2.make (0)

			create {BOOLEAN_CONSTANT} b1.make (true)
			create {BOOLEAN_CONSTANT} b2.make (true)

			create {ADDITION} e.make (c1,c2)

		end

feature -- model attributes
	s : STRING
	i : INTEGER
	class_list : ARRAY[MY_CLASS]
	count : INTEGER
	has_assignment_instruction, status: BOOLEAN
	v : VISITOR
	expr : STRING
	c1,c2,b1,b2, e : EXPRESSION

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
	addition
		do

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
					-- c.set_rt(n) don't know what to set it as ( A -> set_i = ?)
					c.set_expr ("?")
				end
			end
		end

	bool_value (b: BOOLEAN) -- adds `bool` to assignment_instruction
		do
			create {BOOLEAN_CONSTANT} b1.make(b)
		end

	int_value (int: INTEGER) -- adds `int` to assignment_instruction
		do
			create {INTEGER_CONSTANT} c1.make (int) -- c1.value is `int`

		end
feature -- queries
	out : STRING
		do
			create Result.make_from_string ("")
			Result.append ("  Status: ")

			if count > 0 and class_list[1].query_list.count > 0 then
				check attached {QUERY_FEATURE} class_list[1].query_list[1] as q
				then

					Result.append (q.return_type)
				end
			end
			if count > 0 and class_list[1].command_list.count > 0 then
				check attached {COMMAND_FEATURE} class_list[1].command_list[1] as q1
				then
					Result.append(class_list[1].query_list.count.out)
					Result.append(q1.curr_expr)
				end

			end


			Result.append (")")
		end

invariant
	same_count: count = class_list.count
end




