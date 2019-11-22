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

OLDOBJECTS =  fu1649.o fu1649d.o ha1633.o ha1633d.o he1628.o he1628d.o he1626.o \
	he1626d.o tr1631.o tr1631d.o bi1629.o bi1629d.o bi1625.o bi1625d.o \
	ta1636.o ta1636d.o pr1650.o pr1650d.o pr1627.o pr1627d.o ha1637.o \
	ha1637d.o tr1630.o tr1630d.o ac1620.o ac1620d.o ta1635.o ta1635d.o \
	li1632.o li1632d.o ta1634.o ta1634d.o kl1638.o kl1638d.o kl1642.o \
	kl1642d.o kl1639.o kl1639d.o kl1643.o kl1643d.o kl1640.o kl1640d.o \
	kl1644.o kl1644d.o ki1648.o ki1648d.o ki1651.o ki1651d.o kl1641.o \
	kl1641d.o kl1645.o kl1645d.o ev1619.o ev1619d.o ev1621.o ev1621d.o \
	ki1647.o ki1647d.o ev1622.o ev1622d.o ev1624.o ev1624d.o ev1623.o \
	ev1623d.o ki1646.o ki1646d.o 

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

