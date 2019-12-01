note
	description: "Summary description for {VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR

feature -- operations
		-- visit features of all descendants of expression
	visit_constant (c: INTEGER_CONSTANT) deferred end

	visit_addition (a: ADDITION) deferred end

	visit_subtraction (a: SUBTRACTION) deferred end

	visit_multiplication (m : MULTIPLICATION) deferred end

	visit_quotient (q : QUOTIENT) deferred end

	visit_modulo (mod : MODULO) deferred end

	visit_boolean (b : BOOLEAN_CONSTANT) deferred end

	visit_negation(n:NEGATION) deferred end
	visit_negative(n:NEGATIVE) deferred end
	visit_greater_than(n:GREATER_THAN)deferred end
	visit_less_than(n:LESS_THAN)deferred end
	visit_equivalent(e:EQUIVALENT)deferred end
	visit_conjunction(c:CONJUNCTION)deferred end
	visit_disjunction(c:DISJUNCTION)deferred end
end
