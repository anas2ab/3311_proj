note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_LOGICAL_NEGATION
inherit 
	ETF_LOGICAL_NEGATION_INTERFACE
create
	make
feature -- command 
	logical_negation
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
