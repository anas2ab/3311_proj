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
echo "Compiling C code in C23"
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

OBJECTS = big_file_C23_c.o 

OLDOBJECTS =  ev1707.o ev1707d.o ev1706.o ev1706d.o ev1691.o ev1691d.o ev1709.o \
	ev1709d.o ev1705.o ev1705d.o ev1696.o ev1696d.o ev1687.o ev1687d.o \
	ev1717.o ev1717d.o ev1686.o ev1686d.o ev1694.o ev1694d.o ev1693.o \
	ev1693d.o ev1716.o ev1716d.o ev1715.o ev1715d.o ev1685.o ev1685d.o \
	ev1714.o ev1714d.o ev1713.o ev1713d.o ev1695.o ev1695d.o ev1704.o \
	ev1704d.o ev1703.o ev1703d.o ev1702.o ev1702d.o ev1701.o ev1701d.o \
	ev1699.o ev1699d.o ev1698.o ev1698d.o ev1711.o ev1711d.o ev1712.o \
	ev1712d.o ev1710.o ev1710d.o ev1700.o ev1700d.o ev1708.o ev1708d.o \
	ev1692.o ev1692d.o ev1697.o ev1697d.o ev1690.o ev1690d.o ev1689.o \
	ev1689d.o ev1688.o ev1688d.o 

all: Cobj23.o

Cobj23.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj23.o $(OBJECTS)
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

