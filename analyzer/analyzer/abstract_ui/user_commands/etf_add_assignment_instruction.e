note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ASSIGNMENT_INSTRUCTION
inherit 
	ETF_ADD_ASSIGNMENT_INSTRUCTION_INTERFACE
create
	make
feature -- command 
	add_assignment_instruction(cn: STRING ; fn: STRING ; n: STRING)
		require else 
			add_assignment_instruction_precond(cn, fn, n)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
