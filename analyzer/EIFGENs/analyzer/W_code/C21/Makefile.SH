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
echo "Compiling C code in C21"
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

OBJECTS = big_file_C21_c.o 

OLDOBJECTS =  fu1649.o fu1649d.o ha1626.o ha1626d.o he1640.o he1640d.o he1638.o \
	he1638d.o tr1643.o tr1643d.o bi1641.o bi1641d.o in1622.o in1622d.o \
	bi1637.o bi1637d.o ta1629.o ta1629d.o pr1639.o pr1639d.o ha1630.o \
	ha1630d.o tr1642.o tr1642d.o ac1619.o ac1619d.o ac1621.o ac1621d.o \
	ta1628.o ta1628d.o li1644.o li1644d.o ta1627.o ta1627d.o kl1625.o \
	kl1625d.o kl1636.o kl1636d.o kl1651.o kl1651d.o kl1623.o kl1623d.o \
	kl1634.o kl1634d.o kl1647.o kl1647d.o kl1650.o kl1650d.o ki1632.o \
	ki1632d.o ki1645.o ki1645d.o kl1624.o kl1624d.o kl1635.o kl1635d.o \
	ev1620.o ev1620d.o kl1648.o kl1648d.o ki1631.o ki1631d.o ki1646.o \
	ki1646d.o kl1633.o kl1633d.o 

all: Cobj21.o

Cobj21.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj21.o $(OBJECTS)
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

