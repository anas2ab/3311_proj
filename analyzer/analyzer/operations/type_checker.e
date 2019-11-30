note
	description: "Summary description for {TYPE_CHECKER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECKER

inherit
	VISITOR
feature--types
	unknown:BOOLEAN
	bool:BOOLEAN
	invalid:BOOLEAN
	int:BOOLEAN
feature --type queries
	is_type_correct:BOOLEAN
		do
			Result:= not invalid
		end

feature -- visitor implementation
	visit_constant (c : INTEGER_CONSTANT)
		do
			int := TRUE
		end
	visit_boolean(b:BOOLEAN_CONSTANT)
		do
			bool :=TRUE
		end
	visit_addition ( a : ADDITION)
		do
			--check leftchild

			if
				a.left.value 
			then

			end

			--check rightcihld
			if

			then

			end
		end

	visit_subtraction (s : SUBTRACTION)
		do

		end

	visit_multiplication ( m : MULTIPLICATION)
		do

		end

	visit_quotient (q: QUOTIENT)
		do

		end

	visit_modulo ( mod : MODULO)
		do

		end

	visit_boolean ( b : BOOLEAN_CONSTANT)
		do

		end
end
