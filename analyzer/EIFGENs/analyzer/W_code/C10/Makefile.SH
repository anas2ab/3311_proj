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
echo "Compiling C code in C10"
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

OBJECTS = big_file_C10_c.o 

OLDOBJECTS =  ev1288.o ev1288d.o ev1279.o ev1279d.o ev1277.o ev1277d.o ev1276.o \
	ev1276d.o ev1287.o ev1287d.o ev1275.o ev1275d.o ev1286.o ev1286d.o \
	ev1285.o ev1285d.o ev1284.o ev1284d.o ev1274.o ev1274d.o ev1273.o \
	ev1273d.o ev1272.o ev1272d.o ev1271.o ev1271d.o ev1270.o ev1270d.o \
	ev1278.o ev1278d.o ev1269.o ev1269d.o ev1283.o ev1283d.o ev1282.o \
	ev1282d.o ev1268.o ev1268d.o ev1267.o ev1267d.o ev1266.o ev1266d.o \
	ev1265.o ev1265d.o ev1281.o ev1281d.o ev1264.o ev1264d.o ev1263.o \
	ev1263d.o ev1280.o ev1280d.o ev1262.o ev1262d.o ev1261.o ev1261d.o \
	ev1260.o ev1260d.o ev1259.o ev1259d.o ev1258.o ev1258d.o ev1257.o \
	ev1257d.o ev1256.o ev1256d.o 

all: Cobj10.o

Cobj10.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj10.o $(OBJECTS)
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

