note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_INT_VALUE_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent int_value(?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {INTEGER_32} etf_cmd_args[1] as c
			then
				out := "int_value(" + etf_event_argument_out("int_value", "c", c) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command 
	int_value(c: INTEGER_32)
    	deferred
    	end
end
