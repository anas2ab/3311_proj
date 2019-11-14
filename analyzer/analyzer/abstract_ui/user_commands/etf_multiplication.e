note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MULTIPLICATION
inherit 
	ETF_MULTIPLICATION_INTERFACE
create
	make
feature -- command 
	multiplication
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
