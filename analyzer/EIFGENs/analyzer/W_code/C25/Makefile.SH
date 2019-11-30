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
echo "Compiling C code in C25"
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

OBJECTS = big_file_C25_c.o 

OLDOBJECTS =  ev1772.o ev1772d.o ev1760.o ev1760d.o ev1761.o ev1761d.o ev1767.o \
	ev1767d.o ev1768.o ev1768d.o ev1769.o ev1769d.o ev1766.o ev1766d.o \
	ev1762.o ev1762d.o ev1775.o ev1775d.o ev1779.o ev1779d.o ev1774.o \
	ev1774d.o ev1783.o ev1783d.o ev1773.o ev1773d.o ev1752.o ev1752d.o \
	ev1765.o ev1765d.o ev1754.o ev1754d.o ev1758.o ev1758d.o ev1759.o \
	ev1759d.o ev1757.o ev1757d.o ev1753.o ev1753d.o ev1755.o ev1755d.o \
	ev1751.o ev1751d.o ev1776.o ev1776d.o ev1778.o ev1778d.o ev1782.o \
	ev1782d.o ev1777.o ev1777d.o ev1781.o ev1781d.o ev1780.o ev1780d.o \
	ev1763.o ev1763d.o ev1756.o ev1756d.o ev1764.o ev1764d.o ev1771.o \
	ev1771d.o ev1770.o ev1770d.o 

all: Cobj25.o

Cobj25.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj25.o $(OBJECTS)
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

