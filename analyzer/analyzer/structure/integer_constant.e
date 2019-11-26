note
	description: "Summary description for {INTEGER_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTEGER_CONSTANT

inherit
	EXPRESSION

create
	make

feature -- Attributes
	value: INTEGER

feature -- Constructors
	make (nv : INTEGER)
		require
			nv > 0
		do
			value := nv
		end

feature -- Visitors
	accept (v: VISITOR)
			-- The current constant accepts a kind of visitor 'v'.
			-- The dynamic type of 'v' will determine the type of
			-- operation to be performed on the current constant object.
		do
			v.visit_constant (Current)
		end
invariant
	value > 0
end
