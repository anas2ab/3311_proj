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
echo "Compiling C code in C26"
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

OBJECTS = big_file_C26_c.o 

OLDOBJECTS =  ev1808.o ev1808d.o ev1804.o ev1804d.o ev1816.o ev1816d.o ev1790.o \
	ev1790d.o ev1795.o ev1795d.o ev1792.o ev1792d.o ev1791.o ev1791d.o \
	ev1799.o ev1799d.o ev1809.o ev1809d.o ev1801.o ev1801d.o ev1814.o \
	ev1814d.o ev1789.o ev1789d.o ev1810.o ev1810d.o ev1815.o ev1815d.o \
	ev1798.o ev1798d.o ev1802.o ev1802d.o ev1787.o ev1787d.o ev1796.o \
	ev1796d.o ev1785.o ev1785d.o ev1786.o ev1786d.o ev1800.o ev1800d.o \
	ev1794.o ev1794d.o ev1807.o ev1807d.o ev1806.o ev1806d.o ev1793.o \
	ev1793d.o ev1788.o ev1788d.o ev1797.o ev1797d.o ev1803.o ev1803d.o \
	ev1805.o ev1805d.o ev1784.o ev1784d.o ev1813.o ev1813d.o ev1812.o \
	ev1812d.o ev1811.o ev1811d.o 

all: Cobj26.o

Cobj26.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj26.o $(OBJECTS)
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

