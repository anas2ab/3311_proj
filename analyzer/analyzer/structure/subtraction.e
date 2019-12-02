note
	description: "Summary description for {SUBTRACTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SUBTRACTION

inherit -- multiple inheritance
	BINARY_OP

create
	make

feature -- Constructor
	make (l, r: EXPRESSION)
		do
			create children.make
			children.extend (l)
			children.extend (r)
		end

feature -- Queries
	left : EXPRESSION
		do
			Result := children[1]
		end

	right : EXPRESSION
		do
			Result := children[2]
		end

feature -- Visitors
	accept (v: VISITOR)
			-- The current addition accepts a kind of visitor 'v'.
			-- The dynamic type of 'v' will determine the type of
			-- operation to be performed on the current addition object.
		do
			v.visit_subtraction (Current)
		end
		
feature -- command from Expression
	set_expr
		do

		end
invariant
	binary_operation: children.count = 2

end
