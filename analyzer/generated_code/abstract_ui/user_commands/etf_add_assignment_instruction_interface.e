note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_ADD_ASSIGNMENT_INSTRUCTION_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent add_assignment_instruction(? , ? , ?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {STRING} etf_cmd_args[1] as cn and then attached {STRING} etf_cmd_args[2] as fn and then attached {STRING} etf_cmd_args[3] as n
			then
				out := "add_assignment_instruction(" + etf_event_argument_out("add_assignment_instruction", "cn", cn) + "," + etf_event_argument_out("add_assignment_instruction", "fn", fn) + "," + etf_event_argument_out("add_assignment_instruction", "n", n) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command precondition 
	add_assignment_instruction_precond(cn: STRING ; fn: STRING ; n: STRING): BOOLEAN
		do  
			Result := 
				         comment ("CLASS_NAME = STRING")
				and then comment ("FEATURE_NAME = STRING")
				and then comment ("VAR_NAME = STRING")
		ensure then  
			Result = 
				         comment ("CLASS_NAME = STRING")
				and then comment ("FEATURE_NAME = STRING")
				and then comment ("VAR_NAME = STRING")
		end 
feature -- command 
	add_assignment_instruction(cn: STRING ; fn: STRING ; n: STRING)
		require 
			add_assignment_instruction_precond(cn, fn, n)
    	deferred
    	end
end
