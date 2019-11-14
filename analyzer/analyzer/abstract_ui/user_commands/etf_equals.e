note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_EQUALS
inherit 
	ETF_EQUALS_INTERFACE
create
	make
feature -- command 
	equals
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
