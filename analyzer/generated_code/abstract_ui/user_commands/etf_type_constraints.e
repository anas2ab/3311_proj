class
 	 ETF_TYPE_CONSTRAINTS
feature -- list of enumeratd constants
	enum_items : HASH_TABLE[INTEGER, STRING]
		do
			create Result.make (10)
		end

	enum_items_inverse : HASH_TABLE[STRING, INTEGER_32]
		do
			create Result.make (10)
		end
feature -- query on declarations of event parameters
	evt_param_types_table : HASH_TABLE[HASH_TABLE[ETF_PARAM_TYPE, STRING], STRING]
		local
			type_check_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			generate_java_code_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_class_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_attribute_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_command_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_query_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_assignment_instruction_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_call_chain_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			bool_value_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			int_value_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			addition_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			subtraction_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			multiplication_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			quotient_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			modulo_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			conjunction_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			disjunction_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			equals_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			greater_than_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			less_than_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			numerical_negation_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			logical_negation_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
		do
			create Result.make (10)
			Result.compare_objects
			create type_check_param_types.make (10)
			type_check_param_types.compare_objects
			Result.extend (type_check_param_types, "type_check")
			create generate_java_code_param_types.make (10)
			generate_java_code_param_types.compare_objects
			Result.extend (generate_java_code_param_types, "generate_java_code")
			create add_class_param_types.make (10)
			add_class_param_types.compare_objects
			add_class_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}), "cn")
			Result.extend (add_class_param_types, "add_class")
			create add_attribute_param_types.make (10)
			add_attribute_param_types.compare_objects
			add_attribute_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}), "cn")
			add_attribute_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("FEATURE_NAME", create {ETF_STR_PARAM}), "fn")
			add_attribute_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}), "ft")
			Result.extend (add_attribute_param_types, "add_attribute")
			create add_command_param_types.make (10)
			add_command_param_types.compare_objects
			add_command_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}), "cn")
			add_command_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("FEATURE_NAME", create {ETF_STR_PARAM}), "fn")
			add_command_param_types.extend (create {ETF_ARRAY_PARAM}.make (create {ETF_TUPLE_PARAM}.make(<<create {ETF_PARAM_DECL}.make("pn", create {ETF_NAMED_PARAM_TYPE}.make("VAR_NAME", create {ETF_STR_PARAM})), create {ETF_PARAM_DECL}.make("ft", create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))>>)), "ps")
			Result.extend (add_command_param_types, "add_command")
			create add_query_param_types.make (10)
			add_query_param_types.compare_objects
			add_query_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}), "cn")
			add_query_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("FEATURE_NAME", create {ETF_STR_PARAM}), "fn")
			add_query_param_types.extend (create {ETF_ARRAY_PARAM}.make (create {ETF_TUPLE_PARAM}.make(<<create {ETF_PARAM_DECL}.make("pn", create {ETF_NAMED_PARAM_TYPE}.make("VAR_NAME", create {ETF_STR_PARAM})), create {ETF_PARAM_DECL}.make("pt", create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))>>)), "ps")
			add_query_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}), "rt")
			Result.extend (add_query_param_types, "add_query")
			create add_assignment_instruction_param_types.make (10)
			add_assignment_instruction_param_types.compare_objects
			add_assignment_instruction_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}), "cn")
			add_assignment_instruction_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("FEATURE_NAME", create {ETF_STR_PARAM}), "fn")
			add_assignment_instruction_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("VAR_NAME", create {ETF_STR_PARAM}), "n")
			Result.extend (add_assignment_instruction_param_types, "add_assignment_instruction")
			create add_call_chain_param_types.make (10)
			add_call_chain_param_types.compare_objects
			add_call_chain_param_types.extend (create {ETF_ARRAY_PARAM}.make (create {ETF_NAMED_PARAM_TYPE}.make("VAR_NAME", create {ETF_STR_PARAM})), "chain")
			Result.extend (add_call_chain_param_types, "add_call_chain")
			create bool_value_param_types.make (10)
			bool_value_param_types.compare_objects
			bool_value_param_types.extend (create {ETF_BOOL_PARAM}, "c")
			Result.extend (bool_value_param_types, "bool_value")
			create int_value_param_types.make (10)
			int_value_param_types.compare_objects
			int_value_param_types.extend (create {ETF_INT_PARAM}, "c")
			Result.extend (int_value_param_types, "int_value")
			create addition_param_types.make (10)
			addition_param_types.compare_objects
			Result.extend (addition_param_types, "addition")
			create subtraction_param_types.make (10)
			subtraction_param_types.compare_objects
			Result.extend (subtraction_param_types, "subtraction")
			create multiplication_param_types.make (10)
			multiplication_param_types.compare_objects
			Result.extend (multiplication_param_types, "multiplication")
			create quotient_param_types.make (10)
			quotient_param_types.compare_objects
			Result.extend (quotient_param_types, "quotient")
			create modulo_param_types.make (10)
			modulo_param_types.compare_objects
			Result.extend (modulo_param_types, "modulo")
			create conjunction_param_types.make (10)
			conjunction_param_types.compare_objects
			Result.extend (conjunction_param_types, "conjunction")
			create disjunction_param_types.make (10)
			disjunction_param_types.compare_objects
			Result.extend (disjunction_param_types, "disjunction")
			create equals_param_types.make (10)
			equals_param_types.compare_objects
			Result.extend (equals_param_types, "equals")
			create greater_than_param_types.make (10)
			greater_than_param_types.compare_objects
			Result.extend (greater_than_param_types, "greater_than")
			create less_than_param_types.make (10)
			less_than_param_types.compare_objects
			Result.extend (less_than_param_types, "less_than")
			create numerical_negation_param_types.make (10)
			numerical_negation_param_types.compare_objects
			Result.extend (numerical_negation_param_types, "numerical_negation")
			create logical_negation_param_types.make (10)
			logical_negation_param_types.compare_objects
			Result.extend (logical_negation_param_types, "logical_negation")
		end
feature -- query on declarations of event parameters
	evt_param_types_list : HASH_TABLE[LINKED_LIST[ETF_PARAM_TYPE], STRING]
		local
			type_check_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			generate_java_code_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			add_class_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			add_attribute_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			add_command_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			add_query_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			add_assignment_instruction_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			add_call_chain_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			bool_value_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			int_value_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			addition_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			subtraction_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			multiplication_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			quotient_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			modulo_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			conjunction_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			disjunction_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			equals_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			greater_than_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			less_than_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			numerical_negation_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			logical_negation_param_types: LINKED_LIST[ETF_PARAM_TYPE]
		do
			create Result.make (10)
			Result.compare_objects
			create type_check_param_types.make
			type_check_param_types.compare_objects
			Result.extend (type_check_param_types, "type_check")
			create generate_java_code_param_types.make
			generate_java_code_param_types.compare_objects
			Result.extend (generate_java_code_param_types, "generate_java_code")
			create add_class_param_types.make
			add_class_param_types.compare_objects
			add_class_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))
			Result.extend (add_class_param_types, "add_class")
			create add_attribute_param_types.make
			add_attribute_param_types.compare_objects
			add_attribute_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))
			add_attribute_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("FEATURE_NAME", create {ETF_STR_PARAM}))
			add_attribute_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))
			Result.extend (add_attribute_param_types, "add_attribute")
			create add_command_param_types.make
			add_command_param_types.compare_objects
			add_command_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))
			add_command_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("FEATURE_NAME", create {ETF_STR_PARAM}))
			add_command_param_types.extend (create {ETF_ARRAY_PARAM}.make (create {ETF_TUPLE_PARAM}.make(<<create {ETF_PARAM_DECL}.make("pn", create {ETF_NAMED_PARAM_TYPE}.make("VAR_NAME", create {ETF_STR_PARAM})), create {ETF_PARAM_DECL}.make("ft", create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))>>)))
			Result.extend (add_command_param_types, "add_command")
			create add_query_param_types.make
			add_query_param_types.compare_objects
			add_query_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))
			add_query_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("FEATURE_NAME", create {ETF_STR_PARAM}))
			add_query_param_types.extend (create {ETF_ARRAY_PARAM}.make (create {ETF_TUPLE_PARAM}.make(<<create {ETF_PARAM_DECL}.make("pn", create {ETF_NAMED_PARAM_TYPE}.make("VAR_NAME", create {ETF_STR_PARAM})), create {ETF_PARAM_DECL}.make("pt", create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))>>)))
			add_query_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))
			Result.extend (add_query_param_types, "add_query")
			create add_assignment_instruction_param_types.make
			add_assignment_instruction_param_types.compare_objects
			add_assignment_instruction_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("CLASS_NAME", create {ETF_STR_PARAM}))
			add_assignment_instruction_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("FEATURE_NAME", create {ETF_STR_PARAM}))
			add_assignment_instruction_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("VAR_NAME", create {ETF_STR_PARAM}))
			Result.extend (add_assignment_instruction_param_types, "add_assignment_instruction")
			create add_call_chain_param_types.make
			add_call_chain_param_types.compare_objects
			add_call_chain_param_types.extend (create {ETF_ARRAY_PARAM}.make (create {ETF_NAMED_PARAM_TYPE}.make("VAR_NAME", create {ETF_STR_PARAM})))
			Result.extend (add_call_chain_param_types, "add_call_chain")
			create bool_value_param_types.make
			bool_value_param_types.compare_objects
			bool_value_param_types.extend (create {ETF_BOOL_PARAM})
			Result.extend (bool_value_param_types, "bool_value")
			create int_value_param_types.make
			int_value_param_types.compare_objects
			int_value_param_types.extend (create {ETF_INT_PARAM})
			Result.extend (int_value_param_types, "int_value")
			create addition_param_types.make
			addition_param_types.compare_objects
			Result.extend (addition_param_types, "addition")
			create subtraction_param_types.make
			subtraction_param_types.compare_objects
			Result.extend (subtraction_param_types, "subtraction")
			create multiplication_param_types.make
			multiplication_param_types.compare_objects
			Result.extend (multiplication_param_types, "multiplication")
			create quotient_param_types.make
			quotient_param_types.compare_objects
			Result.extend (quotient_param_types, "quotient")
			create modulo_param_types.make
			modulo_param_types.compare_objects
			Result.extend (modulo_param_types, "modulo")
			create conjunction_param_types.make
			conjunction_param_types.compare_objects
			Result.extend (conjunction_param_types, "conjunction")
			create disjunction_param_types.make
			disjunction_param_types.compare_objects
			Result.extend (disjunction_param_types, "disjunction")
			create equals_param_types.make
			equals_param_types.compare_objects
			Result.extend (equals_param_types, "equals")
			create greater_than_param_types.make
			greater_than_param_types.compare_objects
			Result.extend (greater_than_param_types, "greater_than")
			create less_than_param_types.make
			less_than_param_types.compare_objects
			Result.extend (less_than_param_types, "less_than")
			create numerical_negation_param_types.make
			numerical_negation_param_types.compare_objects
			Result.extend (numerical_negation_param_types, "numerical_negation")
			create logical_negation_param_types.make
			logical_negation_param_types.compare_objects
			Result.extend (logical_negation_param_types, "logical_negation")
		end
feature -- comments for contracts
	comment(etf_s: STRING): BOOLEAN
		do
			Result := TRUE
		end
end
