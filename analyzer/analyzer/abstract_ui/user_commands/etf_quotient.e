note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_QUOTIENT
inherit
	ETF_QUOTIENT_INTERFACE
create
	make
feature -- command
	quotient
    	do
			-- perform some update on the model state
			model.quotient
			etf_cmd_container.on_change.notify ([Current])
    	end

end
