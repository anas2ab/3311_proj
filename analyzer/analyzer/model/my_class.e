note
	description: "Summary description for {MY_CLASS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MY_CLASS

create
	make

feature -- Constructor
	make (class_name: STRING)
		do
			name := class_name
			create feature_list.make_empty
			create query_list.make_empty
			create command_list.make_empty
			create 	attribute_list.make_empty
			count := feature_list.count

		end
feature -- Attributes
	name : STRING
	feature_list: ARRAY[FEATURES]
	command_list: ARRAY[ROUTINE_FEATURE]
	query_list:ARRAY[ROUTINE_FEATURE]
	attribute_list:ARRAY[FEATURES]
	count, attr_count, command_count, query_count:INTEGER

feature -- Commands
	add_attribute (fn : STRING; ft : STRING)
		do
			feature_list.force (create {ATTRIBUTE_FEATURE}.make (ft, fn), count+1)

			count := count + 1
			attr_count := attr_count+1
		end

	add_command(fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		do
			feature_list.force (create {COMMAND_FEATURE}.make(fn, ps), count+1)
			command_count := command_count + 1
			command_list.force(create {COMMAND_FEATURE}.make (fn, ps), count+1)
			count:=count+1
		end

	add_query(fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]]; rt:STRING)
		do
			feature_list.force (create {QUERY_FEATURE}.make (fn, ps,rt), count+1)
			query_list.force(create {QUERY_FEATURE}.make (fn, ps, rt), count+1)
			command_count := command_count + 1
			count:=count+1
		end

feature -- Queries

	get_query_feature (n: STRING) : QUERY_FEATURE
			-- helper method for add_assignment_instruction
		do
			create Result.make ("", <<["",""]>>, "")
			across
				query_list is query
			loop
				if query.name ~ n then
					check attached {QUERY_FEATURE} query as q then Result := q end
				end
			end

		end

	get_command_feature (n: STRING) : COMMAND_FEATURE
			-- helper method for add_assignment_instruction
		do
			create Result.make ("", <<["",""]>>)
			across
				command_list is command
			loop
				if command.name ~ n then
					check attached {COMMAND_FEATURE} command as c then Result := c end
				end
			end

		end
end
