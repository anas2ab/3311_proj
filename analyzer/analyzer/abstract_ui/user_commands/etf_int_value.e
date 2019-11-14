note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_INT_VALUE
inherit 
	ETF_INT_VALUE_INTERFACE
create
	make
feature -- command 
	int_value(c: INTEGER_32)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
