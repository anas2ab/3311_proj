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
echo "Compiling C code in C11"
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

OBJECTS = big_file_C11_c.o 

OLDOBJECTS =  ev1321.o ev1321d.o ev1309.o ev1309d.o ev1316.o ev1316d.o ev1317.o \
	ev1317d.o ev1315.o ev1315d.o ev1293.o ev1293d.o ev1318.o ev1318d.o \
	ev1305.o ev1305d.o ev1308.o ev1308d.o ev1306.o ev1306d.o ev1310.o \
	ev1310d.o ev1294.o ev1294d.o ev1290.o ev1290d.o ev1289.o ev1289d.o \
	ev1304.o ev1304d.o ev1303.o ev1303d.o ev1302.o ev1302d.o ev1301.o \
	ev1301d.o ev1314.o ev1314d.o ev1297.o ev1297d.o ev1292.o ev1292d.o \
	ev1300.o ev1300d.o ev1307.o ev1307d.o ev1296.o ev1296d.o ev1311.o \
	ev1311d.o ev1291.o ev1291d.o ev1319.o ev1319d.o ev1313.o ev1313d.o \
	ev1298.o ev1298d.o ev1320.o ev1320d.o ev1312.o ev1312d.o ev1299.o \
	ev1299d.o ev1295.o ev1295d.o 

all: Cobj11.o

Cobj11.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj11.o $(OBJECTS)
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

