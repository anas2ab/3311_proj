note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CALL_CHAIN
inherit 
	ETF_ADD_CALL_CHAIN_INTERFACE
create
	make
feature -- command 
	add_call_chain(chain: ARRAY[STRING])
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
