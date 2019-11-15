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
		end

feature -- model attributes
	s : STRING
	i : INTEGER
	class_list : ARRAY[MY_CLASS]
	count : INTEGER

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
					
				end
			end
		end
feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append ("System State: default model state ")
			Result.append ("(")
			Result.append (i.out)
--			if count > 0 and class_list[1].count > 0 then
--				Result.append(class_list[1].feature_list[1].type)
--			end
			Result.append (")")
		end

end




