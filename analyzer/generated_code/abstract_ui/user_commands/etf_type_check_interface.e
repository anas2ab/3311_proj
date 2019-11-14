note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_TYPE_CHECK_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent type_check
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				TRUE
			then
				out := "type_check"
			else
				etf_cmd_error := True
			end
		end

feature -- command 
	type_check
    	deferred
    	end
end
