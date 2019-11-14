note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SUBTRACTION
inherit 
	ETF_SUBTRACTION_INTERFACE
create
	make
feature -- command 
	subtraction
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
