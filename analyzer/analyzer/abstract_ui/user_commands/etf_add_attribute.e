note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ATTRIBUTE
inherit
	ETF_ADD_ATTRIBUTE_INTERFACE
create
	make
feature -- command
	add_attribute(cn: STRING ; fn: STRING ; ft: STRING)
		require else
			add_attribute_precond(cn, fn, ft)
    	do
			-- perform some update on the model state
			if not model.assignment_instruction.is_empty and model.val=0 and not model.full then
				model.error_msg.set_s ("Error (An assignment instruction is currently being specified for routine " + model.curr_routine + " in class " + model.curr_class + ").")
			elseif not model.class_exists(cn) then
				model.error_msg.set_s ("Error ("+cn+" is not an existing class name).")
			elseif model.feature_exists (fn) then
				model.error_msg.set_s ("Error ("+fn+ " is already an existing feature name in class "+cn+").")
			elseif not model.wrong_rt (ft) then
				model.error_msg.set_s ("Error (Return type does not refer to a primitive type or an existing class:")
				across
					1 |..| model.clashing_array.count is i
				loop
					if i > 1 then
						model.error_msg.set_s (model.error_msg.error + ", " + model.clashing_array[i])
					else
						model.error_msg.set_s (model.error_msg.error + " " + model.clashing_array[i])
					end
				end
				model.error_msg.set_s (model.error_msg.error +").")
			else
				model.add_attribute(cn,fn,ft)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
