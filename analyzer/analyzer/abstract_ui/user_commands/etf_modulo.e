note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODULO
inherit 
	ETF_MODULO_INTERFACE
create
	make
feature -- command 
	modulo
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
