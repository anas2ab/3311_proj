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
echo "Compiling C code in C14"
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

OBJECTS = big_file_C14_c.o 

OLDOBJECTS =  ev1401.o ev1401d.o ev1399.o ev1399d.o ev1398.o ev1398d.o ev1397.o \
	ev1397d.o ev1396.o ev1396d.o ev1400.o ev1400d.o ev1413.o ev1413d.o \
	ev1412.o ev1412d.o ev1406.o ev1406d.o ev1411.o ev1411d.o ev1402.o \
	ev1402d.o ev1416.o ev1416d.o ev1414.o ev1414d.o ev1395.o ev1395d.o \
	ev1394.o ev1394d.o ev1393.o ev1393d.o ev1410.o ev1410d.o ev1391.o \
	ev1391d.o ev1392.o ev1392d.o ev1389.o ev1389d.o ev1390.o ev1390d.o \
	ev1415.o ev1415d.o ev1417.o ev1417d.o ev1409.o ev1409d.o ev1404.o \
	ev1404d.o ev1403.o ev1403d.o ev1405.o ev1405d.o ev1408.o ev1408d.o \
	ev1388.o ev1388d.o ev1419.o ev1419d.o ev1420.o ev1420d.o ev1418.o \
	ev1418d.o ev1407.o ev1407d.o 

all: Cobj14.o

Cobj14.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj14.o $(OBJECTS)
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

