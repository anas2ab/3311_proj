note
	description: "Summary description for {BINARY_OP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	BINARY_OP

inherit
	EXPRESSION
	COMPOSITE[EXPRESSION]

feature -- Queries, represent binary operation
	left : EXPRESSION deferred end

	right : EXPRESSION deferred end

end
