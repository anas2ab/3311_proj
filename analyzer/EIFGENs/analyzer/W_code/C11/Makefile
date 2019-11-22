INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/encoding/implementation/include" -I"$(ISE_LIBRARY)/library/time/spec/include" -I"$(ISE_LIBRARY)/library/vision2/spec/include" -I"$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib"  -pthread -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
SHELL = /bin/sh
CC = gcc
CPP = g++
CFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64 -DEIF_THREADS -DEIF_LINUXTHREADS  -DWORKBENCH -I"/usr/include/eiffelstudio-19.05" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64 -DEIF_THREADS -DEIF_LINUXTHREADS  -DWORKBENCH -I"/usr/include/eiffelstudio-19.05" -I. $(INCLUDE_PATH)
LDFLAGS = -m elf_x86_64
CCLDFLAGS = -m64  
LDSHAREDFLAGS =  -m elf_x86_64 -shared -o
EIFLIB = "/usr/lib/eiffelstudio-19.05/libmtwkbench.a"
EIFTEMPLATES = /usr/share/eiffelstudio-19.05/studio/config/unix/templates
LIBS = -lm -lpthread
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/usr/lib/eiffelstudio-19.05/studio/x2c"
SHAREDLINK = ld
SHAREDLIBS = -lm
SHARED_SUFFIX = .so
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = analyzer.so 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C11_c.o 

OLDOBJECTS =  ev1291.o ev1291d.o ev1290.o ev1290d.o ev1315.o ev1315d.o ev1289.o \
	ev1289d.o ev1299.o ev1299d.o ev1316.o ev1316d.o ev1311.o ev1311d.o \
	ev1300.o ev1300d.o ev1312.o ev1312d.o ev1296.o ev1296d.o ev1314.o \
	ev1314d.o ev1295.o ev1295d.o ev1294.o ev1294d.o ev1321.o ev1321d.o \
	ev1298.o ev1298d.o ev1320.o ev1320d.o ev1303.o ev1303d.o ev1309.o \
	ev1309d.o ev1313.o ev1313d.o ev1307.o ev1307d.o ev1308.o ev1308d.o \
	ev1306.o ev1306d.o ev1310.o ev1310d.o ev1317.o ev1317d.o ev1297.o \
	ev1297d.o ev1302.o ev1302d.o ev1293.o ev1293d.o ev1292.o ev1292d.o \
	ev1319.o ev1319d.o ev1304.o ev1304d.o ev1318.o ev1318d.o ev1301.o \
	ev1301d.o ev1305.o ev1305d.o 

all: Cobj11.o

Cobj11.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj11.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

