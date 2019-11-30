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
echo "Compiling C code in C27"
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

OBJECTS = big_file_C27_c.o 

OLDOBJECTS =  da1838.o da1838d.o kl1848.o kl1848d.o fi1837.o fi1837d.o kl1847.o \
	kl1847d.o yy1836.o yy1836d.o ev1823.o ev1823d.o kl1842.o kl1842d.o \
	yy1835.o yy1835d.o ev1833.o ev1833d.o ev1822.o ev1822d.o ev1821.o \
	ev1821d.o ev1817.o ev1817d.o kl1849.o kl1849d.o kl1844.o kl1844d.o \
	kl1840.o kl1840d.o yy1834.o yy1834d.o we1832.o we1832d.o we1839.o \
	we1839d.o we1831.o we1831d.o kl1843.o kl1843d.o we1830.o we1830d.o \
	we1820.o we1820d.o kl1841.o kl1841d.o kl1846.o kl1846d.o kl1845.o \
	kl1845d.o kl1829.o kl1829d.o uc1828.o uc1828d.o ev1818.o ev1818d.o \
	ev1819.o ev1819d.o uc1827.o uc1827d.o uc1826.o uc1826d.o uc1825.o \
	uc1825d.o uc1824.o uc1824d.o 

all: Cobj27.o

Cobj27.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj27.o $(OBJECTS)
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

