note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_COMMAND
inherit
	ETF_ADD_COMMAND_INTERFACE
create
	make
feature -- command
	add_command(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		require else
			add_command_precond(cn, fn, ps)
    	do
			-- perform some update on the model state
			if not model.assignment_instruction.is_empty then
				model.error_msg.set_s ("Error (An assignment instruction is currently being specified for routine " + model.curr_routine + " in class " + model.curr_class + ").")
			elseif not model.class_exists(cn) then
				model.error_msg.set_s ("Error ("+cn+" is not an existing class name).")
			elseif model.feature_exists (fn) then
				model.error_msg.set_s ("Error ("+fn+ " is already an existing feature name in class "+cn+").")
			elseif model.clashing(ps) then
				model.error_msg.set_s ("Error (Parameter names clash with existing classes:")

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
			elseif model.duplicate_pn (ps) then
				model.error_msg.set_s ("Error (Duplicated parameter names:")
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
			elseif model.non_existing_pt (ps) then
				model.error_msg.set_s ("Error (Parameter types do not refer to primitive types or existing classes:")
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
				model.add_command(cn,fn,ps)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
