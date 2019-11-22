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
echo "Compiling C code in C7"
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

OBJECTS = big_file_C7_c.o 

OLDOBJECTS =  et1179.o et1179d.o et1178.o et1178d.o et1188.o et1188d.o et1186.o \
	et1186d.o et1180.o et1180d.o et1184.o et1184d.o et1182.o et1182d.o \
	et1189.o et1189d.o et1187.o et1187d.o et1185.o et1185d.o et1183.o \
	et1183d.o et1181.o et1181d.o da1177.o da1177d.o ev1176.o ev1176d.o \
	ev1161.o ev1161d.o ev1160.o ev1160d.o ev1159.o ev1159d.o kl1164.o \
	kl1164d.o kl1162.o kl1162d.o ev1158.o ev1158d.o ev1175.o ev1175d.o \
	ev1157.o ev1157d.o kl1173.o kl1173d.o kl1172.o kl1172d.o ev1163.o \
	ev1163d.o ki1169.o ki1169d.o ki1170.o ki1170d.o ki1168.o ki1168d.o \
	ki1167.o ki1167d.o ki1174.o ki1174d.o kl1171.o kl1171d.o kl1166.o \
	kl1166d.o uc1165.o uc1165d.o 

all: Cobj7.o

Cobj7.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj7.o $(OBJECTS)
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

