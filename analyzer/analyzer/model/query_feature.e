note
	description: "Summary description for {QUERY_FEATURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	QUERY_FEATURE

inherit
	ROUTINE_FEATURE

create
	make
feature
	return_type:STRING
feature
	make(f_name : STRING; ps : ARRAY[TUPLE[pn: STRING; ft: STRING]];rt:STRING)
		do
			param:= ps
			name := f_name
			return_type := rt
		end

feature -- Commands

	set_rt(s:STRING)
		do
			return_type:=s
		end

end
