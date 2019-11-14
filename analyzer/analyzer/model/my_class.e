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
		end
feature -- Attributes
	name : STRING
	feature_list: ARRAY[FEATURES]
end
