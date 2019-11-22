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
echo "Compiling C code in C16"
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

OBJECTS = big_file_C16_c.o 

OLDOBJECTS =  ev1474.o ev1474d.o ev1478.o ev1478d.o ev1466.o ev1466d.o ev1465.o \
	ev1465d.o ev1470.o ev1470d.o ev1462.o ev1462d.o ev1476.o ev1476d.o \
	ev1461.o ev1461d.o ev1464.o ev1464d.o ev1471.o ev1471d.o ev1467.o \
	ev1467d.o ev1477.o ev1477d.o ev1481.o ev1481d.o ev1480.o ev1480d.o \
	ev1459.o ev1459d.o ev1472.o ev1472d.o ev1463.o ev1463d.o ev1460.o \
	ev1460d.o ev1479.o ev1479d.o ev1486.o ev1486d.o ev1482.o ev1482d.o \
	ev1456.o ev1456d.o ev1457.o ev1457d.o ev1468.o ev1468d.o ev1458.o \
	ev1458d.o ev1454.o ev1454d.o ev1475.o ev1475d.o ev1455.o ev1455d.o \
	ev1485.o ev1485d.o ev1473.o ev1473d.o ev1469.o ev1469d.o ev1484.o \
	ev1484d.o ev1483.o ev1483d.o 

all: Cobj16.o

Cobj16.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj16.o $(OBJECTS)
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

