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
echo "Compiling C code in C33"
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

OBJECTS = big_file_C33_c.o 

OLDOBJECTS =  ty2029.o ty2029d.o ty2032.o ty2032d.o he2040.o he2040d.o he2038.o \
	he2038d.o tr2035.o tr2035d.o bi2034.o bi2034d.o bi2033.o bi2033d.o \
	pr2039.o pr2039d.o tr2036.o tr2036d.o li2037.o li2037d.o kl2023.o \
	kl2023d.o in2030.o in2030d.o kl2026.o kl2026d.o kl2024.o kl2024d.o \
	ev2031.o ev2031d.o kl2025.o kl2025d.o ki2027.o ki2027d.o ev2042.o \
	ev2042d.o ev2041.o ev2041d.o ev2018.o ev2018d.o ki2028.o ki2028d.o \
	ev2043.o ev2043d.o ev2047.o ev2047d.o ev2046.o ev2046d.o uc2021.o \
	uc2021d.o ev2017.o ev2017d.o ev2016.o ev2016d.o ev2015.o ev2015d.o \
	ev2044.o ev2044d.o ev2045.o ev2045d.o ki2019.o ki2019d.o kl2020.o \
	kl2020d.o uc2022.o uc2022d.o 

all: Cobj33.o

Cobj33.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj33.o $(OBJECTS)
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

