# Create a shared library libZeroSPU2
AUTOMAKE_OPTIONS = foreign
noinst_LIBRARIES = libZeroSPU2.a
INCLUDES = -I@srcdir@/common -I@srcdir@/3rdparty

libZeroSPU2_a_CXXFLAGS = $(shell pkg-config --cflags gtk+-2.0)
libZeroSPU2_a_CFLAGS = $(shell pkg-config --cflags gtk+-2.0)

if X86_64
libZeroSPU2_a_CXXFLAGS += -fPIC
libZeroSPU2_a_CFLAGS += -fPIC
endif

# Create a shared object by faking an exe (thanks to ODE makefiles)
traplibdir=$(prefix)

if DEBUGBUILD
preext=d
endif

EXEEXT=$(preext)@so_ext@

traplib_PROGRAMS=libZeroSPU2
libZeroSPU2_SOURCES=
libZeroSPU2_DEPENDENCIES = libZeroSPU2.a 3rdparty/SoundTouch/libSoundTouch.a
libZeroSPU2_LDFLAGS= @SHARED_LDFLAGS@
libZeroSPU2_LDFLAGS+=-Wl,-soname,@ZEROSPU2_SONAME@
libZeroSPU2_LDADD=$(libZeroSPU2_a_OBJECTS) 3rdparty/SoundTouch/libSoundTouch.a

libZeroSPU2_a_SOURCES = zerospu2.cpp voices.cpp zerodma.cpp
libZeroSPU2_a_SOURCES += zerospu2.h reg.h misc.h
libZeroSPU2_a_SOURCES += Linux/interface.c Linux/Linux.cpp Linux/Alsa.cpp Linux/OSS.cpp Linux/support.c

SUBDIRS = 3rdparty/SoundTouch
