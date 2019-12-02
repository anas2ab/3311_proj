note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADDITION
inherit
	ETF_ADDITION_INTERFACE
create
	make
feature -- command
	addition
    	do
			-- perform some update on the model state
			model.addition
			etf_cmd_container.on_change.notify ([Current])
    	end

end
