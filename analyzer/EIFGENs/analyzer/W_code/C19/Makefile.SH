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

OLDOBJECTS =  ti1583.o ti1583d.o da1581.o da1581d.o da1561.o da1561d.o ti1582.o \
	ti1582d.o da1580.o da1580d.o kl1570.o kl1570d.o da1585.o da1585d.o \
	fi1560.o fi1560d.o da1584.o da1584d.o kl1569.o kl1569d.o yy1559.o \
	yy1559d.o kl1564.o kl1564d.o yy1558.o yy1558d.o kl1571.o kl1571d.o \
	kl1566.o kl1566d.o kl1562.o kl1562d.o yy1557.o yy1557d.o ev1574.o \
	ev1574d.o kl1565.o kl1565d.o kl1576.o kl1576d.o kl1579.o kl1579d.o \
	kl1577.o kl1577d.o kl1578.o kl1578d.o kl1563.o kl1563d.o ki1575.o \
	ki1575d.o kl1573.o kl1573d.o kl1568.o kl1568d.o kl1567.o kl1567d.o \
	kl1572.o kl1572d.o kl1556.o kl1556d.o uc1555.o uc1555d.o uc1554.o \
	uc1554d.o uc1553.o uc1553d.o 

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

