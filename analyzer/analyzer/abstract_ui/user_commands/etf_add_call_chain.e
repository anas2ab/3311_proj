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
			if model.assignment_instruction.is_empty then
				model.error_msg.set_s ("Error (An assignment instruction is not currently being specified).")
			elseif chain.is_empty then
				model.error_msg.set_s ("Error (Call chain is empty).")
			else
				model.add_call_chain(chain)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
