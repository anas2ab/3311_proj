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
echo "Compiling C code in C28"
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

OBJECTS = big_file_C28_c.o 

OLDOBJECTS =  ti1882.o ti1882d.o da1880.o da1880d.o ti1881.o ti1881d.o da1879.o \
	da1879d.o ev1878.o ev1878d.o ev1854.o ev1854d.o we1852.o we1852d.o \
	we1877.o we1877d.o ev1875.o ev1875d.o we1853.o we1853d.o ev1876.o \
	ev1876d.o ev1874.o ev1874d.o kl1869.o kl1869d.o kl1870.o kl1870d.o \
	kl1872.o kl1872d.o kl1871.o kl1871d.o ev1855.o ev1855d.o we1856.o \
	we1856d.o we1867.o we1867d.o we1873.o we1873d.o ki1868.o ki1868d.o \
	kl1851.o kl1851d.o kl1850.o kl1850d.o we1866.o we1866d.o we1865.o \
	we1865d.o we1864.o we1864d.o we1863.o we1863d.o we1862.o we1862d.o \
	we1861.o we1861d.o we1860.o we1860d.o we1859.o we1859d.o we1858.o \
	we1858d.o we1857.o we1857d.o 

all: Cobj28.o

Cobj28.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj28.o $(OBJECTS)
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

