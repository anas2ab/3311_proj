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

OLDOBJECTS =  ki1234.o ki1234d.o ki1227.o ki1227d.o kl1235.o kl1235d.o ev1241.o \
	ev1241d.o ev1246.o ev1246d.o ki1232.o ki1232d.o ki1229.o ki1229d.o \
	ki1228.o ki1228d.o ev1242.o ev1242d.o ev1237.o ev1237d.o ev1244.o \
	ev1244d.o kl1226.o kl1226d.o kl1225.o kl1225d.o kl1231.o kl1231d.o \
	ev1239.o ev1239d.o ev1240.o ev1240d.o ki1233.o ki1233d.o ev1236.o \
	ev1236d.o ev1238.o ev1238d.o uc1243.o uc1243d.o kl1245.o kl1245d.o \
	uc1224.o uc1224d.o uc1223.o uc1223d.o kl1230.o kl1230d.o ev1255.o \
	ev1255d.o ev1254.o ev1254d.o ev1253.o ev1253d.o ev1252.o ev1252d.o \
	ev1251.o ev1251d.o ev1250.o ev1250d.o ev1249.o ev1249d.o ev1248.o \
	ev1248d.o ev1247.o ev1247d.o 

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

