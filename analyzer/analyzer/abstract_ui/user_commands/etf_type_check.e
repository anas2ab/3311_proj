note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_TYPE_CHECK
inherit 
	ETF_TYPE_CHECK_INTERFACE
create
	make
feature -- command 
	type_check
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
