note
	description: "Summary description for {NEGATIVE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATIVE

inherit
	UNARYOP

create
	make

feature --make
	make(l:EXPRESSION)
		do
		create children.make
		children.extend (l)
		op := "~"
		end
feature
	op:STRING
feature
	left:EXPRESSION
		do
			Result := children[1]
		end

feature
	accept (v : VISITOR)
		do
			v.visit_negative (Current)
		end

feature -- command from Expression
	set_expr
		do

		end
invariant
	children: children.count = 1
end
