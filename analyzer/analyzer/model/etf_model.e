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
			status:=TRUE
		end

feature -- model attributes
	s : STRING
	i : INTEGER
	class_list : ARRAY[MY_CLASS]
	count : INTEGER
	has_assignment_instruction:BOOLEAN
	status:BOOLEAN

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
			class_list.force (create {MY_CLASS}.make (nc), count + 1)
			count := count + 1
		end
	add_query(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		do

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
					cl.add_command(cn, ps)
				end
			end
		end

	add_assignment_instruction(cn: STRING ; fn: STRING ; n: STRING)
		local
			q : QUERY_FEATURE
			c : COMMAND_FEATURE
		do
			across
				class_list is cl
			loop
				check attached {QUERY_FEATURE} cl.get_query_feature(fn) as q1
				then
					q := q1
					q.set_rt(n)
				end

				-- still gotta check for command feature
				check attached {COMMAND_FEATURE} cl.get_command_feature(fn) as q1
				then
					c := q1
					-- c.set_rt(n) don't know what to set it as
				end
			end
		end
feature -- queries
	out : STRING
		do
			create Result.make_from_string ("")
			Result.append ("  Status: ")
			Result.append (status.out)
			Result.append ("%N  Number of classes being specified: ")
			Result.append (count.out)
			Result.append ("    "+ class_list[class_list.upper].name)
			Result.append ("%N")
			Result.append ("Number of attributes: ")
			Result.append (class_list[class_list.upper].attr_count.out)
			Result.append (class_list[class_list.upper].attr_count.out)
			Result.append ("Number of queries: ")
			Result.append ("Number of commands: ")
--			if count > 0 and class_list[1].count > 0 then
--				Result.append(class_list[1].feature_list[1].type)
--			end
			Result.append (")")
		end

end




