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
echo "Compiling C code in C30"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include" -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)\library\vision2\spec\include" -I"\$(ISE_LIBRARY)\C_library\zlib"
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

OBJECTS = big_file_C30_c.o 

OLDOBJECTS =  we1929.o we1929d.o ev1941.o ev1941d.o we1920.o we1920d.o ev1924.o \
	ev1924d.o we1930.o we1930d.o we1917.o we1917d.o we1916.o we1916d.o \
	ev1947.o ev1947d.o we1940.o we1940d.o ev1928.o ev1928d.o ev1923.o \
	ev1923d.o ev1922.o ev1922d.o we1938.o we1938d.o we1945.o we1945d.o \
	ev1936.o ev1936d.o we1939.o we1939d.o we1944.o we1944d.o we1934.o \
	we1934d.o we1921.o we1921d.o we1946.o we1946d.o we1937.o we1937d.o \
	we1925.o we1925d.o we1918.o we1918d.o we1919.o we1919d.o we1942.o \
	we1942d.o we1935.o we1935d.o ev1926.o ev1926d.o we1932.o we1932d.o \
	ev1927.o ev1927d.o we1933.o we1933d.o we1943.o we1943d.o we1948.o \
	we1948d.o we1931.o we1931d.o 

all: Cobj30.o

Cobj30.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj30.o $(OBJECTS)
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

