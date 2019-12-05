note
	description: "Summary description for {PRETTY_PRINTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRETTY_PRINTER

inherit
	VISITOR

create
	make

feature -- Constructor
	make
		do
			create expr.make_empty

		end
feature -- Visitor implementation

	visit_constant (c: INTEGER_CONSTANT)
		do
			expr := c.value.out
		end

	visit_addition (a: ADDITION)
		local
			expr_left: PRETTY_PRINTER -- expr_left is a JAVA_CODE_GENERATOR object with default string "" for `v`
			expr_right: PRETTY_PRINTER -- expr_right is a JAVA_CODE_GENERATOR object with default string "" for `v`
		do
			create expr_left.make
			create expr_right.make
			a.left.accept (expr_left)	-- a.left dynamic type addition, so accept from addition is called (first dispatch)
			a.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then -- if expression is empty
				expr := "(? + nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then -- if its a boolean operand
					expr := "(" + expr_left.expr + " + nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " + nil)"
				else
					expr := "(" + expr_left.expr + " + ?)"
				end


			else
				expr := "(" +expr_left.expr + " + " + expr_right.expr  + ")"
			end
		end

	visit_subtraction (s: SUBTRACTION)
		local
			expr_left: PRETTY_PRINTER
			expr_right: PRETTY_PRINTER
		do
			create expr_left.make
			create expr_right.make
			s.left.accept (expr_left)
			s.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then
				expr := "(? - nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then -- if its a boolean operand
					expr := "(" + expr_left.expr + " - nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " - nil)"
				else
					expr := "(" + expr_left.expr + " - ?)"
				end

			else
				expr := "(" + expr_left.expr + " - " + expr_right.expr + ")"
			end
		end

	visit_multiplication (m : MULTIPLICATION)
		local
			expr_left: PRETTY_PRINTER
			expr_right: PRETTY_PRINTER
		do
			create expr_left.make
			create expr_right.make
			m.left.accept (expr_left)
			m.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then
				expr := "(? * nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then -- if its a boolean operand
					expr := "(" + expr_left.expr + " * nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " * nil)"
				else
					expr := "(" + expr_left.expr + " * ?)"
				end


			else
				expr := "(" + expr_left.expr + " * " + expr_right.expr + ")"
			end
		end

	visit_quotient (q : QUOTIENT)
		local
			expr_left: PRETTY_PRINTER
			expr_right: PRETTY_PRINTER
		do
			create expr_left.make
			create expr_right.make
			q.left.accept (expr_left)
			q.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then
				expr := "(? / nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then -- if its a boolean operand
					expr := "(" + expr_left.expr + " / nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " / nil)"
				else
					expr := "(" + expr_left.expr + " / ?)"
				end


			else
				expr := "(" + expr_left.expr + " / " + expr_right.expr + ")"
			end
		end
	visit_modulo (mod : MODULO)
		local
			expr_left: PRETTY_PRINTER
			expr_right: PRETTY_PRINTER
		do
			create expr_left.make
			create expr_right.make
			mod.left.accept (expr_left)
			mod.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then
				expr := "(? %% nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty

				if expr_left.expr.substring (7,7).is_equal ("?") then -- if its a boolean operand
					expr := "(" + expr_left.expr + " %% nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " %% nil)"
				else
					expr := "(" + expr_left.expr + " %% ?)"
				end

			else
				expr := "(" + expr_left.expr + " %% " + expr_right.expr + ")"
			end
		end

	visit_boolean (b : BOOLEAN_CONSTANT)
		do
			expr := b.value.out
		end

	-- BOOLEAN OPERANDS

	visit_greater_than ( g : GREATER_THAN)
		local
			expr_left: PRETTY_PRINTER -- expr_left is a JAVA_CODE_GENERATOR object with default string "" for `v`
			expr_right: PRETTY_PRINTER -- expr_right is a JAVA_CODE_GENERATOR object with default string "" for `v`
		do

			create expr_left.make
			create expr_right.make
			g.left.accept (expr_left)	-- a.left dynamic type addition, so accept from addition is called (first dispatch)
			g.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then -- if expression is empty
				expr := "(? > nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then
					expr := "(" + expr_left.expr + " > nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " > nil)"
				else
					expr := "(" + expr_left.expr + " > ?)"
				end

			else
				expr := "(" +expr_left.expr + " > " + expr_right.expr  + ")"
			end
		end

	visit_less_than (l : LESS_THAN)
		local
			expr_left: PRETTY_PRINTER -- expr_left is a JAVA_CODE_GENERATOR object with default string "" for `v`
			expr_right: PRETTY_PRINTER -- expr_right is a JAVA_CODE_GENERATOR object with default string "" for `v`
		do

			create expr_left.make
			create expr_right.make
			l.left.accept (expr_left)	-- a.left dynamic type addition, so accept from addition is called (first dispatch)
			l.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then -- if expression is empty
				expr := "(? < nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then
					expr := "(" + expr_left.expr + " < nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " < nil)"
				else
					expr := "(" + expr_left.expr + " < ?)"
				end

			else
				expr := "(" +expr_left.expr + " < " + expr_right.expr  + ")"
			end
		end

	visit_equals ( e : EQUALS)
		local
			expr_left: PRETTY_PRINTER -- expr_left is a JAVA_CODE_GENERATOR object with default string "" for `v`
			expr_right: PRETTY_PRINTER -- expr_right is a JAVA_CODE_GENERATOR object with default string "" for `v`
		do

			create expr_left.make
			create expr_right.make
			e.left.accept (expr_left)	-- a.left dynamic type addition, so accept from addition is called (first dispatch)
			e.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then -- if expression is empty
				expr := "(? == nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then
					expr := "(" + expr_left.expr + " == nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " == nil)"
				else
					expr := "(" + expr_left.expr + " == ?)"
				end

			else
				expr := "(" +expr_left.expr + " == " + expr_right.expr  + ")"
			end
		end

	visit_conjunction ( c : CONJUNCTION)
		local
			expr_left: PRETTY_PRINTER -- expr_left is a JAVA_CODE_GENERATOR object with default string "" for `v`
			expr_right: PRETTY_PRINTER -- expr_right is a JAVA_CODE_GENERATOR object with default string "" for `v`
		do

			create expr_left.make
			create expr_right.make
			c.left.accept (expr_left)	-- a.left dynamic type addition, so accept from addition is called (first dispatch)
			c.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then -- if expression is empty
				expr := "(? && nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then
					expr := "(" + expr_left.expr + " && nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " && nil)"
				else
					expr := "(" + expr_left.expr + " && ?)"
				end

			else
				expr := "(" +expr_left.expr + " && " + expr_right.expr  + ")"
			end
		end


	visit_disjunction ( d : DISJUNCTION)
		local
			expr_left: PRETTY_PRINTER -- expr_left is a JAVA_CODE_GENERATOR object with default string "" for `v`
			expr_right: PRETTY_PRINTER -- expr_right is a JAVA_CODE_GENERATOR object with default string "" for `v`
		do

			create expr_left.make
			create expr_right.make
			d.left.accept (expr_left)	-- a.left dynamic type addition, so accept from addition is called (first dispatch)
			d.right.accept (expr_right)
			if expr_left.expr.is_equal ("0") then -- if expression is empty
				expr := "(? || nil)"
			elseif expr_right.expr.is_equal ("0")  then -- if right expression is empty
				if expr_left.expr.substring (7,7).is_equal ("?") then
					expr := "(" + expr_left.expr + " || nil)"
				elseif expr_left.expr.substring (6,6).is_equal ("?") then
					expr := "(" + expr_left.expr + " || nil)"
				else
					expr := "(" + expr_left.expr + " || ?)"
				end

			else
				expr := "(" +expr_left.expr + " || " + expr_right.expr  + ")"
			end
		end

		visit_negation(b:NEGATION)
			local
				expr_left: PRETTY_PRINTER
			do
				create expr_left.make

				b.left.accept (expr_left)
				expr:= "!"+ expr_left.expr
			end
		visit_negative(b:NEGATIVE)

				local
					expr_left: PRETTY_PRINTER
				do
					create expr_left.make

					b.left.accept (expr_left)
					expr:= "~"+ expr_left.expr
				end
feature -- Attributes
	expr : STRING

feature -- Commands

end
