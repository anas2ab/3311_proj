note
	description: "Summary description for {ETF_ARRAY_ARG}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ARRAY_ARG
	
inherit
	ETF_COMPOSITE_ARG
		redefine
			out
		end
create
	make
	
feature -- Constructor
	make (v : ARRAY[ETF_EVT_ARG])
		do
			create src_out.make_empty
			value := v
		end

feature -- Queres
	out : STRING
		local
			i: INTEGER
		do
			create Result.make_empty
			Result.append ("<<")
			from
				i := value.lower
			until
				i > value.upper
			loop
				if NOT value[i].src_out.is_empty then
					Result.append (value[i].src_out)
				else
					Result.append (value[i].out)
				end
				if i < value.upper then
					Result.append (", ")
				end
				i := i + 1
			end
			Result.append (">>")
		end

feature -- conversions to array of simple values
	to_bool_val_array : ARRAY[BOOLEAN]
		require
			across value as member all
				attached {ETF_BOOL_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {ETF_BOOL_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_char_val_array : ARRAY[CHARACTER]
		require
			across value as member all
				attached {ETF_CHAR_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {ETF_CHAR_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_int_val_array : ARRAY[INTEGER]
		require
			across value as member all
				attached {ETF_INT_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {ETF_INT_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_int_64_val_array : ARRAY[INTEGER_64]
		require
			across value as member all
				attached {ETF_INT_64_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {ETF_INT_64_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end
	
	to_int_val_array_from_enum_array : ARRAY[INTEGER_32]
		require
			across value as member all
				attached {ETF_ENUM_INT_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {ETF_ENUM_INT_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_real_val_array : ARRAY[REAL_64]
		require
			across value as member all
				attached {ETF_REAL_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {ETF_REAL_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_str_val_array : ARRAY[STRING]
		require
			across value as member all
				attached {ETF_STR_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {ETF_STR_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

feature -- conversions to array of tuple values
	to_string_string_tuple_array: ARRAY[TUPLE[pn: STRING; ft: STRING]]
		do
			create Result.make_empty
			across value as member
			loop
				if
					attached {ETF_TUPLE_ARG} member.item as tup and then
					attached {ETF_STR_ARG} tup.value[1] as tup_item_1 and then 
					attached {ETF_STR_ARG} tup.value[2] as tup_item_2
				then
					Result.force([tup_item_1.value, tup_item_2.value], Result.upper + 1)
				end
			end
		end

end
