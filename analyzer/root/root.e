note
	description: "Central control for running an ETF project."
	author: "JSO and Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ROOT

inherit
	ETF_ROOT_INTERFACE
		redefine
			switch
		end

create
	make

feature -- Queries
	switch: INTEGER
			-- Running mode of ETF application
		do
--			Result := etf_gui_show_history 	-- GUI mode
			Result := etf_cl_show_history
--			Result := unit_test 				-- Unit Testing mode
		end

feature -- Tests
	add_tests
			-- test classes to be run in unit_test mode
		do
			-- add your tests here
			-- add cluster for tests
			-- add_test (create {MY_TEST}.make)
		end

invariant
	valid_switch:
			switch = unit_test
		or	switch = etf_gui_show_history
		or 	switch = etf_gui_hide_history
		or	switch = etf_cl_show_history
		or	switch = etf_cl_hide_history
end


