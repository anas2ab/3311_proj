note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_CONJUNCTION
inherit
	ETF_CONJUNCTION_INTERFACE
create
	make
feature -- command
	conjunction
    	do
			-- perform some update on the model state
			model.conjunction
			etf_cmd_container.on_change.notify ([Current])
    	end

end
