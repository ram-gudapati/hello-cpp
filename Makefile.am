ACLOCAL_AMFLAGS = -I m4 --install

AM_CXXFLAGS = -g -Wall -Wshadow -Wnon-virtual-dtor -pedantic $(DEPS_CXXFLAGS)
AM_LIBS = $(DEPS_LIBS)

bin_PROGRAMS = prog1 prog2
noinst_LTLIBRARIES = lib1.la
lib_LTLIBRARIES = lib2.la

prog1_SOURCES = \
	src/prog1/main.cpp

prog2_SOURCES = \
	src/prog2/main.cpp
prog2_CPPFLAGS = -DDEBUG
prog2_LDADD = $(noinst_LTLIBRARIES) $(lib_LTLIBRARIES)

lib1_la_SOURCES = \
	src/lib1/lib1.cpp \
	src/lib1/lib1.hpp
lib1_la_LDFLAGS = -static

lib2_la_SOURCES = \
	src/lib2/lib2.cpp \
	src/lib2/lib2.hpp
lib2_la_LIBADD = -lncurses