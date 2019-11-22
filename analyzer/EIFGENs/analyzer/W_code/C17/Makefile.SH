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
echo "Compiling C code in C17"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)/library/encoding/implementation/include" -I"\$(ISE_LIBRARY)/library/time/spec/include" -I"\$(ISE_LIBRARY)/library/vision2/spec/include" -I"\$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib" `$ISE_LIBRARY/library/encoding/implementation/unix/Clib/iconv-config --include_path` `$ISE_LIBRARY/library/vision2/implementation/gtk/Clib/vision2-gtk-config --include_path`
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

OBJECTS = big_file_C17_c.o 

OLDOBJECTS =  ev1487.o ev1487d.o ev1504.o ev1504d.o ev1514.o ev1514d.o ev1497.o \
	ev1497d.o ev1490.o ev1490d.o ev1507.o ev1507d.o ev1495.o ev1495d.o \
	ev1512.o ev1512d.o ev1498.o ev1498d.o ev1515.o ev1515d.o ev1489.o \
	ev1489d.o ev1506.o ev1506d.o ev1511.o ev1511d.o ev1494.o ev1494d.o \
	ev1503.o ev1503d.o ev1516.o ev1516d.o ev1519.o ev1519d.o ev1499.o \
	ev1499d.o ev1508.o ev1508d.o ev1488.o ev1488d.o ev1505.o ev1505d.o \
	ev1502.o ev1502d.o ev1491.o ev1491d.o ev1513.o ev1513d.o ev1501.o \
	ev1501d.o ev1500.o ev1500d.o ev1518.o ev1518d.o ev1496.o ev1496d.o \
	ev1509.o ev1509d.o ev1517.o ev1517d.o ev1510.o ev1510d.o ev1492.o \
	ev1492d.o ev1493.o ev1493d.o 

all: Cobj17.o

Cobj17.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj17.o $(OBJECTS)
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

