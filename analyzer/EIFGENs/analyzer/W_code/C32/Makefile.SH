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
echo "Compiling C code in C32"
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

OBJECTS = big_file_C32_c.o 

OLDOBJECTS =  ev1985.o ev1985d.o ev1991.o ev1991d.o ev1990.o ev1990d.o ev1987.o \
	ev1987d.o ev1982.o ev1982d.o ev2014.o ev2014d.o ev1988.o ev1988d.o \
	ev2012.o ev2012d.o ev2005.o ev2005d.o ev1997.o ev1997d.o ev2011.o \
	ev2011d.o ev2013.o ev2013d.o ev1999.o ev1999d.o ev1986.o ev1986d.o \
	ev2008.o ev2008d.o ev1996.o ev1996d.o ev2002.o ev2002d.o ev2006.o \
	ev2006d.o ev2001.o ev2001d.o ev2000.o ev2000d.o ev1995.o ev1995d.o \
	ev2009.o ev2009d.o ev1989.o ev1989d.o ev2010.o ev2010d.o ev1992.o \
	ev1992d.o ev1994.o ev1994d.o ev2004.o ev2004d.o ev1998.o ev1998d.o \
	ev1993.o ev1993d.o ev2003.o ev2003d.o ev2007.o ev2007d.o ev1984.o \
	ev1984d.o ev1983.o ev1983d.o 

all: Cobj32.o

Cobj32.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj32.o $(OBJECTS)
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

