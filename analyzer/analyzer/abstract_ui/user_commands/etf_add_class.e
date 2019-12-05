note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CLASS
inherit
	ETF_ADD_CLASS_INTERFACE
create
	make
feature -- command
	add_class(cn: STRING)
		require else
			add_class_precond(cn)
    	do
			-- perform some update on the model state
			if not model.assignment_instruction.is_empty then
				model.error_msg.set_s ("Error (An assignment instruction is currently being specified for routine " + model.curr_routine + " in class " + model.curr_class + ").")
			elseif model.class_exists (cn) then
				model.error_msg.set_s ("Error ("+cn+" is already an existing class name).")
			else
				model.add_class(cn)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
