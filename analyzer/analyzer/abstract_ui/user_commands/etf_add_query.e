note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_QUERY
inherit
	ETF_ADD_QUERY_INTERFACE
create
	make
feature -- command
	add_query(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		require else
			add_query_precond(cn, fn, ps, rt)
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
					1 |..| 2 is i -- fix this
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
					1 |..| model.duplicate_checker.count is i
				loop
					if i > 1 then
						model.error_msg.set_s (model.error_msg.error + ", " + model.duplicate_checker[i])
					else
						model.error_msg.set_s (model.error_msg.error + " " + model.duplicate_checker[i])
					end
				end
				model.error_msg.set_s (model.error_msg.error +").")
			elseif model.wrong_p_rt (rt) then
				model.error_msg.set_s ("Error (Return type does not refer to a primitive type or an existing class:")
				across
					1 |..| model.duplicate_checker.count is i
				loop
					if i > 1 then
						model.error_msg.set_s (model.error_msg.error + ", " + model.duplicate_checker[i])
					else
						model.error_msg.set_s (model.error_msg.error + " " + model.duplicate_checker[i])
					end
				end
				model.error_msg.set_s (model.error_msg.error +").")
			else
				model.add_query(cn,fn,ps,rt)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
