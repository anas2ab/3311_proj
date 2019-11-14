note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CLASS
inherit 
	ETF_ADD_CLASS_INTERFACE
create
	make
feature -- command 
	add_class(cn: STRING)
		require else 
			add_class_precond(cn)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
