## Makefile.am for DirectFB/inputdrivers/hisi_lirc

INCLUDES = \
	-I$(top_builddir)/include	\
	-I$(top_builddir)/lib	\
	-I$(top_srcdir)/include	\
	-I$(top_srcdir)/lib	\
	-I$(top_srcdir)/src

lirc_LTLIBRARIES = libdirectfb_hisi_lirc.la

if BUILD_STATIC
lirc_DATA = $(lirc_LTLIBRARIES:.la=.o)
endif

lircdir = $(MODULEDIR)/inputdrivers

libdirectfb_hisi_lirc_la_SOURCES =	\
	lirc.c

libdirectfb_hisi_lirc_la_LDFLAGS = \
	-module			\
	-avoid-version		\
	$(DFB_LDFLAGS)

libdirectfb_hisi_lirc_la_LIBADD = \
	$(top_builddir)/lib/direct/libdirect.la \
	$(top_builddir)/src/libdirectfb.la


include $(top_srcdir)/rules/libobject.make

