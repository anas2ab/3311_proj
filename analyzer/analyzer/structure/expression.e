note
	description: "Summary description for {EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	EXPRESSION

feature -- accept

	accept (v : VISITOR) deferred end

feature -- commands

	set_expr deferred end

end
