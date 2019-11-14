note
	description: "Summary description for {ETF_INTERVAL_PARAM}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_INTERVAL_PARAM

inherit
	ETF_PRIMITIVE_PARAM_TYPE
	redefine
		out
	end

create
	make

feature -- Constructor
	make (l, u: INTEGER_32)
		do
			lower := l
			upper := u
		end

feature -- Attributes
	lower, upper: INTEGER_32

feature -- Queries
	eiffel_type : STRING
		do
			Result := "INTEGER_32"
		end

	create_clause : STRING
		do
			Result := "create {ETF_INTERVAL_PARAM}.make(" +
						lower.out + ", " + upper.out + ")"
		end

	out : STRING
		do
			Result := lower.out + " .. " + upper.out
		end
end


