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
echo "Compiling C code in C24"
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

OBJECTS = big_file_C24_c.o 

OLDOBJECTS =  ev1727.o ev1727d.o ev1726.o ev1726d.o ev1725.o ev1725d.o ev1724.o \
	ev1724d.o ev1722.o ev1722d.o ev1723.o ev1723d.o ev1740.o ev1740d.o \
	ev1739.o ev1739d.o ev1738.o ev1738d.o ev1741.o ev1741d.o ev1737.o \
	ev1737d.o ev1721.o ev1721d.o ev1720.o ev1720d.o ev1719.o ev1719d.o \
	ev1745.o ev1745d.o ev1735.o ev1735d.o ev1728.o ev1728d.o ev1718.o \
	ev1718d.o ev1732.o ev1732d.o ev1736.o ev1736d.o ev1731.o ev1731d.o \
	ev1734.o ev1734d.o ev1730.o ev1730d.o ev1746.o ev1746d.o ev1748.o \
	ev1748d.o ev1750.o ev1750d.o ev1744.o ev1744d.o ev1743.o ev1743d.o \
	ev1733.o ev1733d.o ev1749.o ev1749d.o ev1742.o ev1742d.o ev1747.o \
	ev1747d.o ev1729.o ev1729d.o 

all: Cobj24.o

Cobj24.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj24.o $(OBJECTS)
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

