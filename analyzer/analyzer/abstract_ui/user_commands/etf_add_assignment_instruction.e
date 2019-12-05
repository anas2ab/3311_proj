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
			if not model.assignment_instruction.is_empty and model.val=0 and not model.full then
				model.error_msg.set_s ("Error (An assignment instruction is currently being specified for routine " + model.curr_routine + " in class " + model.curr_class + ").")
			elseif not model.class_exists(cn) then
				model.error_msg.set_s ("Error ("+cn+" is not an existing class name).")
			elseif not model.feature_exists (fn) then
				model.error_msg.set_s ("Error (" + fn + " is not an existing feature name in class " +cn +").")
			elseif not model.implementation_exists(fn) then
				model.error_msg.set_s ("Error (Attribute " +fn + " in class " +cn+ " cannot be specified with an implementation).")
			else
				model.add_assignment_instruction(cn, fn, n)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
