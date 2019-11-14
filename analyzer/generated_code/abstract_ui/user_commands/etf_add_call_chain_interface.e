note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_ADD_CALL_CHAIN_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent add_call_chain(?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {ARRAY[STRING]} etf_cmd_args[1] as chain
			then
				out := "add_call_chain(" + etf_event_argument_out("add_call_chain", "chain", chain) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command 
	add_call_chain(chain: ARRAY[STRING])
    	deferred
    	end
end
