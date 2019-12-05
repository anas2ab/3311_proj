
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
	return_type: STRING
feature
	make(f_name : STRING; ps : ARRAY[TUPLE[pn: STRING; ft: STRING]];rt:STRING)
		do
			param:= ps
			name := f_name
			return_type := rt
			num_of_params := ps.count
			create curr_expr.make_empty
		end

feature -- Commands

	set_rt(s:STRING)
		do
			return_type:=s
		end

	set_expr (s : STRING)
		do
			curr_expr := s
		end
feature -- queries
	get_expr : STRING
		do
			Result := curr_expr
		end
feature -- attributes
	num_of_params : INTEGER
	curr_expr : STRING
end
