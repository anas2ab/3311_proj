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
echo "Compiling C code in C9"
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

OBJECTS = big_file_C9_c.o 

OLDOBJECTS =  et1224.o et1224d.o va1225.o va1225d.o va1226.o va1226d.o et1223.o \
	et1223d.o ki1233.o ki1233d.o kl1241.o kl1241d.o ki1240.o ki1240d.o \
	ev1247.o ev1247d.o ev1252.o ev1252d.o ki1234.o ki1234d.o kl1227.o \
	kl1227d.o ki1238.o ki1238d.o ki1235.o ki1235d.o ev1248.o ev1248d.o \
	ev1243.o ev1243d.o ev1250.o ev1250d.o kl1232.o kl1232d.o kl1231.o \
	kl1231d.o kl1237.o kl1237d.o ev1245.o ev1245d.o ev1246.o ev1246d.o \
	ki1239.o ki1239d.o ev1244.o ev1244d.o ev1242.o ev1242d.o uc1249.o \
	uc1249d.o kl1251.o kl1251d.o uc1230.o uc1230d.o uc1229.o uc1229d.o \
	uc1228.o uc1228d.o kl1236.o kl1236d.o ev1255.o ev1255d.o ev1254.o \
	ev1254d.o ev1253.o ev1253d.o 

all: Cobj9.o

Cobj9.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj9.o $(OBJECTS)
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

