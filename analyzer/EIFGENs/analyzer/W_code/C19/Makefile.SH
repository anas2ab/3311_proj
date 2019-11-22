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
echo "Compiling C code in C19"
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

OBJECTS = big_file_C19_c.o 

OLDOBJECTS =  da1567.o da1567d.o kl1576.o kl1576d.o fi1566.o fi1566d.o kl1575.o \
	kl1575d.o yy1565.o yy1565d.o ev1556.o ev1556d.o kl1570.o kl1570d.o \
	yy1564.o yy1564d.o ev1555.o ev1555d.o ev1554.o ev1554d.o kl1577.o \
	kl1577d.o kl1572.o kl1572d.o kl1568.o kl1568d.o yy1563.o yy1563d.o \
	ev1580.o ev1580d.o kl1571.o kl1571d.o kl1585.o kl1585d.o kl1583.o \
	kl1583d.o kl1584.o kl1584d.o kl1582.o kl1582d.o kl1569.o kl1569d.o \
	kl1579.o kl1579d.o kl1574.o kl1574d.o kl1578.o kl1578d.o kl1573.o \
	kl1573d.o ki1581.o ki1581d.o uc1561.o uc1561d.o kl1562.o kl1562d.o \
	ev1553.o ev1553d.o uc1560.o uc1560d.o uc1559.o uc1559d.o uc1558.o \
	uc1558d.o uc1557.o uc1557d.o 

all: Cobj19.o

Cobj19.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj19.o $(OBJECTS)
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

