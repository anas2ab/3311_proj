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

OBJECTS = big_file_C3_c.o 

OLDOBJECTS =  es1047.o es1047d.o es1043.o es1043d.o es1046.o es1046d.o es1045.o \
	es1045d.o et1041.o et1041d.o et1039.o et1039d.o et1044.o et1044d.o \
	es1042.o es1042d.o et1040.o et1040d.o et1038.o et1038d.o yy1036.o \
	yy1036d.o ev1035.o ev1035d.o yy1034.o yy1034d.o ev1033.o ev1033d.o \
	ev1032.o ev1032d.o gr1031.o gr1031d.o ev1029.o ev1029d.o ev1028.o \
	ev1028d.o ev1027.o ev1027d.o ev1057.o ev1057d.o ki1052.o ki1052d.o \
	ev1056.o ev1056d.o ev1054.o ev1054d.o ev1053.o ev1053d.o ki1051.o \
	ki1051d.o uc1050.o uc1050d.o uc1049.o uc1049d.o yy1037.o yy1037d.o \
	ev1030.o ev1030d.o rt1055.o rt1055d.o uc1048.o uc1048d.o kl1025.o \
	kl1025d.o uc1026.o uc1026d.o 

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

