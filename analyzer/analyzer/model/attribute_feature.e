note
	description: "Summary description for {ATTRIBUTE_FEATURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ATTRIBUTE_FEATURE

inherit
	FEATURES

create
	make

feature -- CONSTRUCTOR
	make (f_type : STRING; f_name: STRING)
		do
			name := f_name
			type := f_type
		end
end
