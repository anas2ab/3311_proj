note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_ADD_CLASS_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent add_class(?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {STRING} etf_cmd_args[1] as cn
			then
				out := "add_class(" + etf_event_argument_out("add_class", "cn", cn) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command precondition 
	add_class_precond(cn: STRING): BOOLEAN
		do  
			Result := 
				comment ("CLASS_NAME = STRING")
		ensure then  
			Result = 
				comment ("CLASS_NAME = STRING")
		end 
feature -- command 
	add_class(cn: STRING)
		require 
			add_class_precond(cn)
    	deferred
    	end
end
