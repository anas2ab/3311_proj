note
	description: "Summary description for {COMPOSITE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMPOSITE[G]

feature -- Attributes
	children: LINKED_LIST[G]

feature -- Commands
	add_child(nc: G)
		do
			children.extend (nc)
		end

feature -- Queries, represent binary operation
	left : EXPRESSION deferred end

	right : EXPRESSION deferred end
end
