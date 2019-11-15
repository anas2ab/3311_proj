note
	description: "Summary description for {MY_CLASS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MY_CLASS

create
	make

feature -- Constructor
	make (class_name: STRING)
		do
			name := class_name
			create feature_list.make_empty
			count := feature_list.count
		end
feature -- Attributes
	name : STRING
	feature_list: ARRAY[FEATURES]
	count : INTEGER

feature -- Commands
	add_attribute (fn : STRING; ft : STRING)
		do
			feature_list.force (create {ATTRIBUTE_FEATURE}.make (ft, fn), count+1)
			count := count + 1
		end

	add_command(fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		do
			feature_list.force (create {ROUTINE_FEATURE}.make_command (fn, ps), count+1)
			count := count + 1
		end

end
