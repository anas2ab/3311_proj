note
	description: "Summary description for {COMMAND_FEATURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_FEATURE

inherit
	ROUTINE_FEATURE

create
	make

feature
	make (f_name : STRING; ps : ARRAY[TUPLE[pn: STRING; ft: STRING]])
		do

			name := f_name

		--	type := "" -- have to figure this out.. don't know if I should make this a local variable or import it from FEATURE class
			param := ps
	end


end
