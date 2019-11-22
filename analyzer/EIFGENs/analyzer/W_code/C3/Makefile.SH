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
echo "Compiling C code in C3"
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

OBJECTS = big_file_C3_c.o 

OLDOBJECTS =  es1048.o es1048d.o es1044.o es1044d.o es1047.o es1047d.o es1046.o \
	es1046d.o et1042.o et1042d.o et1040.o et1040d.o et1045.o et1045d.o \
	es1043.o es1043d.o et1041.o et1041d.o et1039.o et1039d.o yy1037.o \
	yy1037d.o ev1036.o ev1036d.o yy1035.o yy1035d.o ev1034.o ev1034d.o \
	ev1033.o ev1033d.o gr1032.o gr1032d.o kl1025.o kl1025d.o ev1031.o \
	ev1031d.o ev1030.o ev1030d.o ev1028.o ev1028d.o ki1051.o ki1051d.o \
	ev1057.o ev1057d.o ev1056.o ev1056d.o ev1054.o ev1054d.o uc1053.o \
	uc1053d.o uc1052.o uc1052d.o ki1050.o ki1050d.o yy1038.o yy1038d.o \
	ev1029.o ev1029d.o rt1055.o rt1055d.o uc1049.o uc1049d.o kl1026.o \
	kl1026d.o uc1027.o uc1027d.o 

all: Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj3.o $(OBJECTS)
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

