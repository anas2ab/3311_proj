note
	description: "Summary description for {VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR

feature -- operations
		-- visit features of all descendants of expression
	visit_constant (c: CONSTANT) deferred end

	visit_addition (a: ADDITION) deferred end

	visit_subtraction (a: SUBTRACTION) deferred end

	visit_multiplication (m : MULTIPLICATION) deferred end

	visit_quotient (q : QUOTIENT) deferred end

	visit_modulo (mod : MODULO) deferred end
end