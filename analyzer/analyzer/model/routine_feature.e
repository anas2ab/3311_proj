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
	make_command
--	make_query

feature -- Constructors
	make_command (f_name : STRING; ps : ARRAY[TUPLE[pn: STRING; ft: STRING]])
		do
			name := f_name
			type := "" -- have to figure this out.. don't know if I should make this a local variable or import it from FEATURE class
			param := ps
		end

--	make_query (f_type : STRING; f_name : STRING; ps : ARRAY[TUPLE[pn: STRING; ft: STRING]]; rt: STRING)
--		do
--			name := f_name
--			type := f_type
--			param := ps
--			return_type := rt
--		end

feature -- Attributes
	param : ARRAY[TUPLE[STRING, STRING]]
--	return_type: STRING
end
