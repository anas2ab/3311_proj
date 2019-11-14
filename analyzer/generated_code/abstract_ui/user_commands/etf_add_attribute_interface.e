note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_ADD_ATTRIBUTE_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent add_attribute(? , ? , ?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {STRING} etf_cmd_args[1] as cn and then attached {STRING} etf_cmd_args[2] as fn and then attached {STRING} etf_cmd_args[3] as ft
			then
				out := "add_attribute(" + etf_event_argument_out("add_attribute", "cn", cn) + "," + etf_event_argument_out("add_attribute", "fn", fn) + "," + etf_event_argument_out("add_attribute", "ft", ft) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command precondition 
	add_attribute_precond(cn: STRING ; fn: STRING ; ft: STRING): BOOLEAN
		do  
			Result := 
				         comment ("CLASS_NAME = STRING")
				and then comment ("FEATURE_NAME = STRING")
		ensure then  
			Result = 
				         comment ("CLASS_NAME = STRING")
				and then comment ("FEATURE_NAME = STRING")
		end 
feature -- command 
	add_attribute(cn: STRING ; fn: STRING ; ft: STRING)
		require 
			add_attribute_precond(cn, fn, ft)
    	deferred
    	end
end
