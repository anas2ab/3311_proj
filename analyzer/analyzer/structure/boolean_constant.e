note
	description: "Summary description for {BOOLEAN_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_CONSTANT

inherit
	EXPRESSION

create
	make

feature -- Attributes
	value: BOOLEAN

feature -- Constructors
	make (nv : BOOLEAN)

		do
			value := nv
		end

feature -- Visitors
	accept (v: VISITOR)
			-- The current constant accepts a kind of visitor 'v'.
			-- The dynamic type of 'v' will determine the type of
			-- operation to be performed on the current constant object.
		do
			v.visit_boolean (Current)
		end

end

