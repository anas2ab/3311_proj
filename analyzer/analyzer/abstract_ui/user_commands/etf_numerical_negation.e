note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NUMERICAL_NEGATION
inherit 
	ETF_NUMERICAL_NEGATION_INTERFACE
create
	make
feature -- command 
	numerical_negation
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
