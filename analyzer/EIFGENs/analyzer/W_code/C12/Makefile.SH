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
echo "Compiling C code in C12"
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

OBJECTS = big_file_C12_c.o 

OLDOBJECTS =  et1325.o et1325d.o et1324.o et1324d.o ev1336.o ev1336d.o ev1334.o \
	ev1334d.o ev1342.o ev1342d.o ev1341.o ev1341d.o ev1333.o ev1333d.o \
	ev1337.o ev1337d.o ev1323.o ev1323d.o ev1350.o ev1350d.o ev1326.o \
	ev1326d.o ev1340.o ev1340d.o ev1335.o ev1335d.o ev1330.o ev1330d.o \
	ev1339.o ev1339d.o ev1343.o ev1343d.o ev1329.o ev1329d.o ev1348.o \
	ev1348d.o ev1347.o ev1347d.o ev1327.o ev1327d.o ev1353.o ev1353d.o \
	ev1352.o ev1352d.o ev1328.o ev1328d.o ev1338.o ev1338d.o ev1346.o \
	ev1346d.o ev1354.o ev1354d.o ev1322.o ev1322d.o ev1351.o ev1351d.o \
	ev1332.o ev1332d.o ev1331.o ev1331d.o ev1349.o ev1349d.o ev1345.o \
	ev1345d.o ev1344.o ev1344d.o 

all: Cobj12.o

Cobj12.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj12.o $(OBJECTS)
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

