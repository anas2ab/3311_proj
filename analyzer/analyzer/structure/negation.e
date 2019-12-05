note
	description: "Summary description for {NEGATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATION

inherit
	UNARYOP

create
	make

feature --make
	make(l:EXPRESSION)
		do
		create children.make
		children.extend (l)
		op := "!"
		end
feature
	op:STRING
feature
	left:EXPRESSION
		do
			Result := children[1]
		end

feature -- command from Expression
	set_expr
		do

		end
feature
	accept (v : VISITOR)
		do
			v.visit_negation (Current)
		end

end
