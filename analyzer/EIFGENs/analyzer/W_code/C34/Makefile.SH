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
echo "Compiling C code in C34"
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

OBJECTS = big_file_C34_c.o 

OLDOBJECTS =  fu2061.o fu2061d.o ha2055.o ha2055d.o ta2058.o ta2058d.o ta2056.o \
	ta2056d.o ha2057.o ha2057d.o ac2069.o ac2069d.o ta2059.o ta2059d.o \
	et2053.o et2053d.o kl2070.o kl2070d.o kl2074.o kl2074d.o kl2077.o \
	kl2077d.o kl2063.o kl2063d.o kl2073.o kl2073d.o kl2080.o kl2080d.o \
	kl2071.o kl2071d.o kl2075.o kl2075d.o kl2078.o kl2078d.o co2054.o \
	co2054d.o kl2072.o kl2072d.o kl2076.o kl2076d.o kl2079.o kl2079d.o \
	ki2051.o ki2051d.o kl2062.o kl2062d.o kl2065.o kl2065d.o ev2068.o \
	ev2068d.o ki2050.o ki2050d.o kl2064.o kl2064d.o kl2066.o kl2066d.o \
	ev2048.o ev2048d.o we2067.o we2067d.o ev2049.o ev2049d.o ki2060.o \
	ki2060d.o kl2052.o kl2052d.o 

all: Cobj34.o

Cobj34.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj34.o $(OBJECTS)
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

