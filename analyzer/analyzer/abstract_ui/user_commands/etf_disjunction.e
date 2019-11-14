note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DISJUNCTION
inherit 
	ETF_DISJUNCTION_INTERFACE
create
	make
feature -- command 
	disjunction
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
