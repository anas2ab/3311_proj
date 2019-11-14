note
	description: "Summary description for {ROUTINE_FEATURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ROUTINE_FEATURE

inherit
	FEATURES

create
	make

feature -- Constructors
	make (f_type : STRING; f_name : STRING)
		do
			name := f_name
			type := f_type
		end
end
