note
	description: "Summary description for {TYPE_CHECKER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECKER

inherit
	VISITOR
create
	make
feature--types
	unknown:BOOLEAN
	bool:BOOLEAN
	invalid:BOOLEAN
	int:BOOLEAN
	typecorrect:BOOLEAN

feature
	make
	do
		typecorrect := false
	end
feature --type queries
	is_type_correct:BOOLEAN
		do
			Result:= not invalid
		end

feature -- visitor implementation
	visit_constant (c : INTEGER_CONSTANT)
		do
			typecorrect := TRUE
		end
	visit_boolean(b:BOOLEAN_CONSTANT)
		do
			typecorrect :=TRUE
		end
	visit_addition ( a : ADDITION)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			a.left.accept(expr_left)
			a.right.accept(expr_right)

			if attached{INTEGER_CONSTANT} expr_left and attached{INTEGER_CONSTANT} expr_right then
				typecorrect := TRUE
			end
		end

	visit_subtraction (s : SUBTRACTION)

			local
				expr_left: TYPE_CHECKER
				expr_right: TYPE_CHECKER

			do
				--check leftchild
				create expr_left.make
				create expr_right.make
				s.left.accept(expr_left)
				s.right.accept(expr_right)

				if attached{INTEGER_CONSTANT} expr_left and attached{INTEGER_CONSTANT} expr_right then
					typecorrect := TRUE
				end
		end

	visit_multiplication ( m : MULTIPLICATION)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			m.left.accept(expr_left)
			m.right.accept(expr_right)

			if attached{INTEGER_CONSTANT} expr_left and attached{INTEGER_CONSTANT} expr_right then
				typecorrect := TRUE
			end

		end

	visit_quotient (q: QUOTIENT)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			q.left.accept(expr_left)
			q.right.accept(expr_right)

			if attached{INTEGER_CONSTANT} expr_left and attached{INTEGER_CONSTANT} expr_right then
				typecorrect := TRUE
			end

		end

	visit_modulo ( mod : MODULO)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			mod.left.accept(expr_left)
			mod.right.accept(expr_right)

			if attached{INTEGER_CONSTANT} expr_left and attached{INTEGER_CONSTANT} expr_right then
				typecorrect := TRUE
			end

		end

	visit_negation (n:NEGATION)
		local
			expr_left: TYPE_CHECKER


		do
			--check leftchild
			create expr_left.make

			n.left.accept(expr_left)


			if attached{BOOLEAN_CONSTANT} expr_left  then
				typecorrect := TRUE
			end

		end

	visit_negative (n:NEGATIVE)
		local
			expr_left: TYPE_CHECKER
		do
			--check leftchild
			create expr_left.make

			n.left.accept(expr_left)


			if attached{INTEGER_CONSTANT} expr_left  then
				typecorrect := TRUE
			end

		end
	visit_greater_than (g:GREATER_THAN)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			g.left.accept(expr_left)
			g.right.accept(expr_right)

			if attached{INTEGER_CONSTANT} expr_left and attached{INTEGER_CONSTANT} expr_right then
				typecorrect := TRUE
			end

		end
	visit_less_than (g:LESS_THAN)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			g.left.accept(expr_left)
			g.right.accept(expr_right)

			if attached{INTEGER_CONSTANT} expr_left and attached{INTEGER_CONSTANT} expr_right then
				typecorrect := TRUE
			end

		end
	visit_equals (g:EQUALS)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			g.left.accept(expr_left)
			g.right.accept(expr_right)

			if attached{BOOLEAN_CONSTANT} expr_left and attached{BOOLEAN_CONSTANT} expr_right then
				typecorrect := TRUE
			elseif
				attached{INTEGER_CONSTANT} expr_left and attached{INTEGER_CONSTANT} expr_right
			then

			end

		end
	visit_conjunction (g:CONJUNCTION)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			g.left.accept(expr_left)
			g.right.accept(expr_right)

			if attached{BOOLEAN_CONSTANT} expr_left and attached{BOOLEAN_CONSTANT} expr_right then
				typecorrect := TRUE
			end

		end

	visit_disjunction (g:DISJUNCTION)
		local
			expr_left: TYPE_CHECKER
			expr_right: TYPE_CHECKER

		do
			--check leftchild
			create expr_left.make
			create expr_right.make
			g.left.accept(expr_left)
			g.right.accept(expr_right)

			if attached{BOOLEAN_CONSTANT} expr_left and attached{BOOLEAN_CONSTANT} expr_right then
				typecorrect := TRUE
			end

		end


end
