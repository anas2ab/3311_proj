deferred class ETF_EVT_SCANNER

inherit

	YY_COMPRESSED_SCANNER_SKELETON
		rename
			make as make_compressed_scanner_skeleton,
			reset as reset_compressed_scanner_skeleton
		end
		
	ETF_EVT_TOKENS

feature -- Status report

	valid_start_condition (sc: INTEGER): BOOLEAN
			-- Is `sc' a valid start condition?
		do
			Result := (sc = INITIAL)
		end

feature {NONE} -- Implementation

	yy_build_tables
			-- Build scanner tables.
		do
			yy_nxt := yy_nxt_template
			yy_chk := yy_chk_template
			yy_base := yy_base_template
			yy_def := yy_def_template
			yy_ec := yy_ec_template
			yy_meta := yy_meta_template
			yy_accept := yy_accept_template
		end

	yy_execute_action (yy_act: INTEGER)
			-- Execute semantic action.
		do
			inspect yy_act
when 1 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 67 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 67")
end
-- ignore whitespaces
when 2 then
yy_set_line_column
--|#line 69 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 69")
end
-- ignore new lines
when 3 then
	yy_column := yy_column + 6
--|#line 71 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 71")
end
last_token := TK_SYSTEM
when 4 then
	yy_column := yy_column + 4
--|#line 72 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 72")
end
last_token := TK_BOOL
when 5 then
	yy_column := yy_column + 7
--|#line 73 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 73")
end
last_token := TK_BOOLEAN
when 6 then
	yy_column := yy_column + 4
--|#line 74 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 74")
end
last_token := TK_CHAR
when 7 then
	yy_column := yy_column + 9
--|#line 75 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 75")
end
last_token := TK_CHARACTER
when 8 then
	yy_column := yy_column + 10
--|#line 76 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 76")
end
last_token := TK_INTEGER_64
when 9 then
	yy_column := yy_column + 7
--|#line 77 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 77")
end
last_token := TK_INTEGER
when 10 then
	yy_column := yy_column + 4
--|#line 78 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 78")
end
last_token := TK_REAL
when 11 then
	yy_column := yy_column + 6
--|#line 79 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 79")
end
last_token := TK_STR
when 12 then
	yy_column := yy_column + 5
--|#line 80 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 80")
end
last_token := TK_VALUE
when 13 then
	yy_column := yy_column + 5
--|#line 81 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 81")
end
last_token := TK_TUPLE
when 14 then
	yy_column := yy_column + 5
--|#line 82 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 82")
end
last_token := TK_ARRAY
when 15 then
	yy_column := yy_column + 1
--|#line 84 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 84")
end
last_token := TK_COMMA
when 16 then
	yy_column := yy_column + 1
--|#line 85 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 85")
end
last_token := TK_COLON
when 17 then
	yy_column := yy_column + 1
--|#line 86 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 86")
end
last_token := TK_SEMI_COLON
when 18 then
	yy_column := yy_column + 1
--|#line 87 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 87")
end
last_token := TK_LPAREN
when 19 then
	yy_column := yy_column + 1
--|#line 88 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 88")
end
last_token := TK_RPAREN
when 20 then
	yy_column := yy_column + 1
--|#line 89 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 89")
end
last_token := TK_LSBRAC
when 21 then
	yy_column := yy_column + 1
--|#line 90 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 90")
end
last_token := TK_RSBRAC
when 22 then
	yy_column := yy_column + 1
--|#line 91 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 91")
end
last_token := TK_LABRAC
when 23 then
	yy_column := yy_column + 1
--|#line 92 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 92")
end
last_token := TK_RABRAC
when 24 then
	yy_column := yy_column + 1
--|#line 93 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 93")
end
last_token := TK_LCBRAC
when 25 then
	yy_column := yy_column + 1
--|#line 94 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 94")
end
last_token := TK_RCBRAC
when 26 then
	yy_column := yy_column + 1
--|#line 95 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 95")
end
last_token := TK_DQUOTE
when 27 then
	yy_column := yy_column + 1
--|#line 96 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 96")
end
last_token := TK_MINUS
when 28 then
	yy_column := yy_column + 2
--|#line 97 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 97")
end
last_token := TK_UPTO
when 29 then
	yy_column := yy_column + 4
--|#line 98 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 98")
end
last_token := TK_TYPE
when 30 then
	yy_column := yy_column + 1
--|#line 99 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 99")
end
last_token := TK_EQ
when 31 then
	yy_column := yy_column + 4
--|#line 101 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 101")
end

			 last_string_value := text
			 last_token := TK_TRUE
		
when 32 then
	yy_column := yy_column + 5
--|#line 106 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 106")
end

			 last_string_value := text
			 last_token := TK_FALSE
		
when 33 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 111 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 111")
end
 -- return a digit token and store the integer value in last_integer_value, which the parser will use
			-- last_integer_value := text.to_integer
			last_string_value := text
			last_token := NUMBER
		
when 34 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 117 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 117")
end

		                 -- last_real_value := text.to_real
						 last_string_value := text -- keep the original string rep. for VALUE, if applicable
		                 last_token := REAL
        
when 35 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 123 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 123")
end
 -- return an identifier and store the value in last_string_value, which the parser will use
			last_string_value := text
			last_token := IDENT
		
when 36 then
	yy_column := yy_column + 3
--|#line 128 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 128")
end

				last_character := text.item(2)
				last_token := CHAR_LIT
			
when 37 then
yy_set_line_column
--|#line 133 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 133")
end

				last_string_value := text.substring(2, text.count - 1)
				last_token := STR_LIT
			
when 38 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 138 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 138")
end
-- Ignore comments
when 39 then
	yy_column := yy_column + 1
--|#line 140 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 140")
end
-- DO NOT REMOVE THIS!!!!! 
        -- return the character code for a character, which are reserved tokens that the parser uses
		-- The character code for '+' is a value token and is used by the parser by writing
		-- '+' as a token in a rule
		last_token := text_item (1).code
		
when 40 then
yy_set_line_column
--|#line 0 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 0")
end
last_token := yyError_token
fatal_error ("scanner jammed")
			else
				last_token := yyError_token
				fatal_error ("fatal scanner internal error: no action found")
			end
		end

	yy_execute_eof_action (yy_sc: INTEGER)
			-- Execute EOF semantic action.
		do
			terminate
		end

feature {NONE} -- Table templates

	yy_nxt_template: SPECIAL [INTEGER]
			-- Template for `yy_nxt'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 230)
			yy_nxt_template_1 (an_array)
			yy_nxt_template_2 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_nxt_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_nxt'.
		do
			yy_array_subcopy (an_array, <<
			    0,    4,    5,    6,    7,    8,    9,   10,   11,   12,
			   13,   14,   15,   15,   15,   16,   17,   18,   19,   20,
			   21,   22,   23,   24,   25,   25,   26,   25,   25,   27,
			   25,   25,   25,   25,   28,   29,   30,   25,   31,   25,
			   32,    4,   33,    4,   25,   25,   25,   25,   25,   25,
			   34,   35,   25,   25,   36,   37,   38,   38,   38,   38,
			   40,   45,   46,   46,   46,   51,   55,   55,   38,   56,
			   38,   40,   60,   62,   62,   62,   45,   46,   46,   46,
			   70,   55,   55,   66,   40,   78,   59,  108,   51,   62,
			   62,   62,   82,   90,  107,   70,   41,  106,  105,   66,

			   78,   39,   39,   39,   39,   39,   39,   41,   41,  104,
			  103,  102,   82,   90,   42,  101,   42,   42,   42,   42,
			   41,   47,   47,   47,   47,   43,  100,   43,   43,   43,
			   43,   99,   98,   97,   96,   95,   94,   93,   92,   91,
			   89,   88,   87,   86,   85,   84,   83,   81,   80,   79,
			   77,   76,   75,   74,   73,   72,   71,   69,   68,   67,
			   65,   64,   63,   61,   58,   57,   54,   53,   52,   50,
			   49,   48,   44,   43,  109,    3,  109,  109,  109,  109,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109, yy_Dummy>>,
			1, 200, 0)
		end

	yy_nxt_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_nxt'.
		do
			yy_array_subcopy (an_array, <<
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109, yy_Dummy>>,
			1, 31, 200)
		end

	yy_chk_template: SPECIAL [INTEGER]
			-- Template for `yy_chk'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 230)
			yy_chk_template_1 (an_array)
			yy_chk_template_2 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_chk_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_chk'.
		do
			yy_array_subcopy (an_array, <<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    5,    7,    5,    7,
			    8,   15,   15,   15,   15,   26,   30,   35,   38,   30,
			   38,   39,   41,   45,   45,   45,   46,   46,   46,   46,
			   55,   30,   35,   51,   60,   66,   35,  107,   26,   62,
			   62,   62,   70,   78,  105,   55,    8,  104,  103,   51,

			   66,  110,  110,  110,  110,  110,  110,   39,   41,  102,
			   98,   97,   70,   78,  111,   96,  111,  111,  111,  111,
			   60,  112,  112,  112,  112,  113,   95,  113,  113,  113,
			  113,   92,   91,   89,   88,   85,   84,   83,   81,   79,
			   77,   76,   75,   74,   73,   72,   71,   69,   68,   67,
			   65,   64,   63,   59,   58,   57,   56,   54,   53,   52,
			   50,   49,   48,   42,   34,   31,   29,   28,   27,   24,
			   23,   22,   14,   13,    3,  109,  109,  109,  109,  109,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109, yy_Dummy>>,
			1, 200, 0)
		end

	yy_chk_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_chk'.
		do
			yy_array_subcopy (an_array, <<
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109, yy_Dummy>>,
			1, 31, 200)
		end

	yy_base_template: SPECIAL [INTEGER]
			-- Template for `yy_base'
		once
			Result := yy_fixed_array (<<
			    0,    0,    0,  174,  175,   54,  175,   55,   55,    0,
			  175,  175,  175,  163,  161,   50,  175,  175,  175,  175,
			  175,  175,  137,  138,  141,    0,   44,  137,  142,  130,
			   32,  144,  175,  175,  111,   33,  175,  175,   66,   66,
			  175,   67,  157,    0,  175,   61,   65,    0,  128,  129,
			  139,   53,  123,  137,  123,   43,  123,  125,  104,  105,
			   79,  175,   77,  131,  121,  116,   50,  124,  118,  118,
			   67,  116,  108,   93,   98,  103,  116,  119,   68,  112,
			    0,  107,    0,  112,  111,   90,    0,    0,  113,  110,
			    0,  107,  104,    0,    0,   79,   84,   75,   76,    0,

			    0,    0,   84,   55,   63,   80,    0,   74,    0,  175,
			  100,  113,  118,  124, yy_Dummy>>)
		end

	yy_def_template: SPECIAL [INTEGER]
			-- Template for `yy_def'
		once
			Result := yy_fixed_array (<<
			    0,  109,    1,  109,  109,  109,  109,  109,  110,  111,
			  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
			  109,  109,  112,  112,  112,  112,  112,  112,  112,  112,
			  112,  112,  109,  109,  112,  112,  109,  109,  109,  110,
			  109,  110,  109,  113,  109,  109,  109,  112,  112,  112,
			  112,  112,  112,  112,  112,  112,  112,  112,  112,  112,
			  110,  109,  109,  112,  112,  112,  112,  112,  112,  112,
			  112,  112,  112,  112,  112,  112,  112,  112,  112,  112,
			  112,  112,  112,  112,  112,  112,  112,  112,  112,  112,
			  112,  112,  112,  112,  112,  112,  112,  112,  112,  112,

			  112,  112,  112,  112,  112,  112,  112,  112,  112,    0,
			  109,  109,  109,  109, yy_Dummy>>)
		end

	yy_ec_template: SPECIAL [INTEGER]
			-- Template for `yy_ec'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 256)
			yy_ec_template_1 (an_array)
			yy_ec_template_2 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_ec_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_ec'.
		do
			yy_array_subcopy (an_array, <<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    2,
			    3,    1,    1,    4,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    2,    1,    5,    1,    1,    1,    1,    6,
			    7,    8,    1,    1,    9,   10,   11,    1,   12,   12,
			   12,   12,   13,   12,   14,   12,   12,   12,   15,   16,
			   17,   18,   19,   20,    1,   21,   22,   23,   24,   25,
			   26,   27,   28,   29,   24,   24,   30,   24,   31,   32,
			   33,   24,   34,   35,   36,   37,   38,   24,   24,   39,
			   24,   40,   41,   42,    1,   43,    1,   44,   24,   24,

			   24,   45,   26,   24,   24,   24,   24,   24,   46,   47,
			   24,   24,   48,   24,   49,   50,   51,   52,   24,   24,
			   24,   53,   24,   54,    1,   55,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1, yy_Dummy>>,
			1, 200, 0)
		end

	yy_ec_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_ec'.
		do
			yy_array_subcopy (an_array, <<
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1, yy_Dummy>>,
			1, 57, 200)
		end

	yy_meta_template: SPECIAL [INTEGER]
			-- Template for `yy_meta'
		once
			Result := yy_fixed_array (<<
			    0,    1,    1,    2,    1,    1,    1,    1,    1,    1,
			    1,    1,    3,    3,    4,    1,    1,    1,    1,    1,
			    1,    3,    3,    3,    3,    3,    3,    3,    3,    3,
			    3,    3,    3,    3,    3,    3,    3,    3,    3,    5,
			    1,    1,    1,    3,    3,    3,    3,    3,    3,    3,
			    3,    3,    3,    6,    1,    1, yy_Dummy>>)
		end

	yy_accept_template: SPECIAL [INTEGER]
			-- Template for `yy_accept'
		once
			Result := yy_fixed_array (<<
			    0,    0,    0,   41,   39,    1,    2,    1,   26,   39,
			   18,   19,   15,   27,   39,   33,   16,   17,   22,   30,
			   23,    2,   35,   35,   35,   35,   35,   35,   35,   35,
			   35,   35,   20,   21,   35,   35,   24,   25,    1,    0,
			   37,    0,    0,   38,   28,    0,   33,   35,   35,   35,
			   35,   35,   35,   35,   35,   35,   35,   35,   35,   35,
			   37,   36,   34,   35,   35,   35,   35,   35,   35,   35,
			   35,   35,   35,   35,   35,   35,    4,    6,   35,   35,
			   10,   35,   31,   35,   35,   35,   29,   14,   35,   35,
			   32,   35,   35,   13,   12,   35,   35,   35,   35,   11,

			    3,    5,   35,    9,   35,   35,    7,   35,    8,    0, yy_Dummy>>)
		end

feature {NONE} -- Constants

	yyJam_base: INTEGER = 175
			-- Position in `yy_nxt'/`yy_chk' tables
			-- where default jam table starts

	yyJam_state: INTEGER = 109
			-- State id corresponding to jam state

	yyTemplate_mark: INTEGER = 110
			-- Mark between normal states and templates

	yyNull_equiv_class: INTEGER = 1
			-- Equivalence code for NULL character

	yyReject_used: BOOLEAN = false
			-- Is `reject' called?

	yyVariable_trail_context: BOOLEAN = false
			-- Is there a regular expression with
			-- both leading and trailing parts having
			-- variable length?

	yyReject_or_variable_trail_context: BOOLEAN = false
			-- Is `reject' called or is there a
			-- regular expression with both leading
			-- and trailing parts having variable length?

	yyNb_rules: INTEGER = 40
			-- Number of rules

	yyEnd_of_buffer: INTEGER = 41
			-- End of buffer rule code

	yyLine_used: BOOLEAN = true
			-- Are line and column numbers used?

	yyPosition_used: BOOLEAN = false
			-- Is `position' used?

	INITIAL: INTEGER = 0
			-- Start condition codes

feature -- User-defined features



feature {NONE} -- Initialization

	make 
		do
			make_compressed_scanner_skeleton
		end

feature -- reset

	reset 
		do
			reset_compressed_scanner_skeleton
		end

end


