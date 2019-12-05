note
	description: "Summary description for {ERRORS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ERRORS

create
	make

feature -- Constructor
	make
		do
			create error.make_from_string ("OK.")
		end

feature -- Attributes
	error: STRING

feature -- Commands
	set_s (err: STRING)
		do
			error := err
		end
end
