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
echo "Compiling C code in C6"
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

OBJECTS = big_file_C6_c.o 

OLDOBJECTS =  ro1140.o ro1140d.o et1139.o et1139d.o et1138.o et1138d.o ti1128.o \
	ti1128d.o ab1130.o ab1130d.o da1127.o da1127d.o da1142.o da1142d.o \
	ev1134.o ev1134d.o du1125.o du1125d.o da1126.o da1126d.o kl1135.o \
	kl1135d.o ev1143.o ev1143d.o ev1132.o ev1132d.o ev1144.o ev1144d.o \
	ev1156.o ev1156d.o ev1155.o ev1155d.o ev1154.o ev1154d.o ev1153.o \
	ev1153d.o ev1152.o ev1152d.o ev1133.o ev1133d.o kl1137.o kl1137d.o \
	ev1151.o ev1151d.o ev1150.o ev1150d.o ev1124.o ev1124d.o ev1141.o \
	ev1141d.o uc1131.o uc1131d.o ev1149.o ev1149d.o ev1148.o ev1148d.o \
	kl1129.o kl1129d.o ki1136.o ki1136d.o ev1147.o ev1147d.o ev1146.o \
	ev1146d.o ev1145.o ev1145d.o 

all: Cobj6.o

Cobj6.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj6.o $(OBJECTS)
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

