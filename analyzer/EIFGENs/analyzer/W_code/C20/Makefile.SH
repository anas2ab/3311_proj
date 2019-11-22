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

OLDOBJECTS =  ty1607.o ty1607d.o ty1613.o ty1613d.o in1618.o in1618d.o ac1617.o \
	ac1617d.o ti1589.o ti1589d.o da1587.o da1587d.o et1615.o et1615d.o \
	et1598.o et1598d.o ti1588.o ti1588d.o da1592.o da1592d.o da1586.o \
	da1586d.o kl1609.o kl1609d.o yy1597.o yy1597d.o et1596.o et1596d.o \
	da1591.o da1591d.o in1608.o in1608d.o da1590.o da1590d.o kl1610.o \
	kl1610d.o kl1611.o kl1611d.o yy1594.o yy1594d.o et1595.o et1595d.o \
	ev1614.o ev1614d.o kl1612.o kl1612d.o ev1616.o ev1616d.o ev1604.o \
	ev1604d.o uc1601.o uc1601d.o ev1605.o ev1605d.o uc1602.o uc1602d.o \
	uc1593.o uc1593d.o kl1600.o kl1600d.o ki1599.o ki1599d.o ev1603.o \
	ev1603d.o ev1606.o ev1606d.o 

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

