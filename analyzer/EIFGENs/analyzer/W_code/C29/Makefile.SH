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
echo "Compiling C code in C29"
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

OBJECTS = big_file_C29_c.o 

OLDOBJECTS =  et1898.o et1898d.o da1885.o da1885d.o yy1897.o yy1897d.o et1896.o \
	et1896d.o da1884.o da1884d.o da1883.o da1883d.o yy1894.o yy1894d.o \
	et1895.o et1895d.o we1915.o we1915d.o we1909.o we1909d.o we1908.o \
	we1908d.o ev1913.o ev1913d.o ev1889.o ev1889d.o we1901.o we1901d.o \
	we1907.o we1907d.o we1906.o we1906d.o ev1914.o ev1914d.o we1888.o \
	we1888d.o ev1899.o ev1899d.o we1912.o we1912d.o we1886.o we1886d.o \
	ev1892.o ev1892d.o ev1887.o ev1887d.o we1891.o we1891d.o ev1900.o \
	ev1900d.o we1905.o we1905d.o we1904.o we1904d.o we1911.o we1911d.o \
	we1890.o we1890d.o uc1893.o uc1893d.o we1903.o we1903d.o we1902.o \
	we1902d.o we1910.o we1910d.o 

all: Cobj29.o

Cobj29.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj29.o $(OBJECTS)
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

