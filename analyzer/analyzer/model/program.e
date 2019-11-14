note
	description: "Summary description for {PROGRAM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PROGRAM

create
	make

feature -- Constructor
	make
		do
			create class_list.make_empty
		end
feature -- Attributes
	class_list : ARRAY[MY_CLASS]

feature --
	add_class (nc : MY_CLASS)
		do
			class_list.force(nc, class_list.count+1)
		end
end
