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
			if model.assignment_instruction.is_empty then
				model.error_msg.set_s ("Error (An assignment instruction is not currently being specified).")
			else
				model.disjunction
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
