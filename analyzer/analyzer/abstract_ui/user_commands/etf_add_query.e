note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_QUERY
inherit 
	ETF_ADD_QUERY_INTERFACE
create
	make
feature -- command 
	add_query(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		require else 
			add_query_precond(cn, fn, ps, rt)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
