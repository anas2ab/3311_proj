note
	description: "Summary description for {EQUIVALENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"



class
	EQUIVALENT

inherit
	BINARY_OP
create
	make

feature
	make(l,r:EXPRESSION)
		do
			create children.make
			children.extend (l)
			children.extend (r)
		end
feature
	left: EXPRESSION
		do
			Result := children[1]
		end

	right: EXPRESSION
 		do
 			Result := children[2]
 		end

feature -- Visitors
	accept (v: VISITOR)
			-- The current addition accepts a kind of visitor 'v'.
			-- The dynamic type of 'v' will determine the type of
			-- operation to be performed on the current addition object.
		do
			v.visit_EQUIVALENT(Current)
		end

invariant
	binary_operation: children.count = 2
end