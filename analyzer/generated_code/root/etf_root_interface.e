note
	description: "Interface that contains a switch and allows different runtime behaviour accordingly."
	author: "Jackie Wang and Jonathan S. Ostroff"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_ROOT_INTERFACE
inherit
	ES_SUITE

	ETF_CMD_LINE_ROOT_INTERFACE
		rename
			make as make_from_cl_root
		end

	EXCEPTIONS

feature -- Constants
	-- Unit Testing mode
	unit_test			: INTEGER = 1
	-- GUI mode
	etf_gui_show_history	: INTEGER = 2
	etf_gui_hide_history	: INTEGER = 3
	-- command-line mode
	etf_cl_show_history	: INTEGER = 4 -- show history if '-g' option is specified
	etf_cl_hide_history	: INTEGER = 5 -- hide history if '-g' option is specified

feature -- Queries
	switch: INTEGER
			-- Running mode of ETF application.
		do
			Result := etf_gui_show_history
		end

feature -- Command
	add_tests
			-- Add unit tests.
		require
			switch = unit_test
		deferred
		end

feature {NONE} -- Constructor
	 make
	 		-- Initialize ETF application.
	 	local
	 		operating_signal: BOOLEAN
	 	do
	 		initialize_attributes

	 		if operating_signal then
	 			-- quit and do  othing else
	 		else
		 		if 		switch = etf_gui_show_history
		 			or	switch = etf_cl_show_history
		 		then
					show_history
				elseif	switch = etf_gui_hide_history
		 			or	switch = etf_cl_hide_history
				then
					hide_history
				else
					-- do nothing
				end

		 		inspect switch
		 		when unit_test then
		 			if argument_count = 0 then
		 				add_tests
			 			show_browser
			 			run_espec
			 		else
			 			io.put_string ("Error: current mode is ESpec test (no command line arguments).")
		 			end
		 		when etf_gui_show_history, etf_gui_hide_history then
		 			if argument_count = 0 then
			 			make_from_gui_root
			 		else
			 			io.put_string ("Error: current mode is ETF GUI (no command line arguments).")
		 			end
				when etf_cl_show_history, etf_cl_hide_history then
					make_from_cl_root
		 		else
					-- invalid switch
					check FALSE end
		 		end
		 	end
		 rescue
	 		if 		is_signal
	 			and attached meaning(exception) as s
	 		then
-- 				print("%N" + s + "%NQuit...%N")
				print("%NYou quit the session. Bye ...%N")
 				operating_signal := true
 				retry
	 		end
	 	end

end


--1.14 (2019-10-12)
