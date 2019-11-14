note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_BOOL_VALUE_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent bool_value(?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {BOOLEAN} etf_cmd_args[1] as c
			then
				out := "bool_value(" + etf_event_argument_out("bool_value", "c", c) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command 
	bool_value(c: BOOLEAN)
    	deferred
    	end
end
