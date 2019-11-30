case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C31"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include" -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)\library\vision2\spec\include" -I"\$(ISE_LIBRARY)\C_library\zlib"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = analyzer$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C31_c.o 

OLDOBJECTS =  ev1973.o ev1973d.o ev1961.o ev1961d.o ev1974.o ev1974d.o ev1959.o \
	ev1959d.o ev1979.o ev1979d.o ev1980.o ev1980d.o ev1981.o ev1981d.o \
	ev1978.o ev1978d.o ev1957.o ev1957d.o ev1960.o ev1960d.o ev1964.o \
	ev1964d.o ev1977.o ev1977d.o ev1955.o ev1955d.o ev1968.o ev1968d.o \
	ev1958.o ev1958d.o ev1956.o ev1956d.o ev1966.o ev1966d.o ev1972.o \
	ev1972d.o ev1963.o ev1963d.o we1954.o we1954d.o ev1976.o ev1976d.o \
	ev1962.o ev1962d.o we1950.o we1950d.o ev1975.o ev1975d.o we1949.o \
	we1949d.o ev1967.o ev1967d.o ev1971.o ev1971d.o ev1970.o ev1970d.o \
	ev1969.o ev1969d.o ev1953.o ev1953d.o we1952.o we1952d.o we1951.o \
	we1951d.o ev1965.o ev1965d.o 

all: Cobj31.o

Cobj31.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj31.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

