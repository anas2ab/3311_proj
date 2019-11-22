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
echo "Compiling C code in C18"
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

OBJECTS = big_file_C18_c.o 

OLDOBJECTS =  ev1551.o ev1551d.o ev1546.o ev1546d.o ev1535.o ev1535d.o ev1530.o \
	ev1530d.o ev1526.o ev1526d.o ev1531.o ev1531d.o ev1550.o ev1550d.o \
	ev1545.o ev1545d.o ev1540.o ev1540d.o ev1547.o ev1547d.o ev1542.o \
	ev1542d.o ev1538.o ev1538d.o ev1524.o ev1524d.o ev1544.o ev1544d.o \
	ev1549.o ev1549d.o ev1548.o ev1548d.o ev1534.o ev1534d.o ev1533.o \
	ev1533d.o ev1532.o ev1532d.o ev1541.o ev1541d.o ev1525.o ev1525d.o \
	ev1529.o ev1529d.o ev1528.o ev1528d.o ev1543.o ev1543d.o ev1522.o \
	ev1522d.o ev1527.o ev1527d.o ev1539.o ev1539d.o ev1552.o ev1552d.o \
	ev1537.o ev1537d.o ev1520.o ev1520d.o ev1536.o ev1536d.o ev1521.o \
	ev1521d.o ev1523.o ev1523d.o 

all: Cobj18.o

Cobj18.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj18.o $(OBJECTS)
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

