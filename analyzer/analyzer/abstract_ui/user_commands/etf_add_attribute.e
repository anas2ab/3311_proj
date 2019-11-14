note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ATTRIBUTE
inherit 
	ETF_ADD_ATTRIBUTE_INTERFACE
create
	make
feature -- command 
	add_attribute(cn: STRING ; fn: STRING ; ft: STRING)
		require else 
			add_attribute_precond(cn, fn, ft)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
