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
echo "Compiling C code in C20"
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

OBJECTS = big_file_C20_c.o 

OLDOBJECTS =  ty1602.o ty1602d.o ty1606.o ty1606d.o et1612.o et1612d.o et1592.o \
	et1592d.o da1586.o da1586d.o kl1613.o kl1613d.o kl1614.o kl1614d.o \
	yy1591.o yy1591d.o et1590.o et1590d.o in1603.o in1603d.o kl1609.o \
	kl1609d.o kl1617.o kl1617d.o kl1607.o kl1607d.o kl1615.o kl1615d.o \
	yy1588.o yy1588d.o et1589.o et1589d.o ev1605.o ev1605d.o kl1608.o \
	kl1608d.o kl1616.o kl1616d.o ev1618.o ev1618d.o ev1604.o ev1604d.o \
	ev1597.o ev1597d.o ev1598.o ev1598d.o uc1595.o uc1595d.o ev1599.o \
	ev1599d.o ev1610.o ev1610d.o ev1601.o ev1601d.o kl1594.o kl1594d.o \
	ki1593.o ki1593d.o uc1596.o uc1596d.o uc1587.o uc1587d.o ev1600.o \
	ev1600d.o ev1611.o ev1611d.o 

all: Cobj20.o

Cobj20.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj20.o $(OBJECTS)
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

