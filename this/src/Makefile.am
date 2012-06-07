noinst_LIBRARIES = libthis.a

libthis_a_CFLAGS = -I$(top_srcdir)/something/src/ -Wall -fPIC

libthis_a_SOURCES = series.c

libthis_a_LIBADD = $(top_builddir)/something/src/libsomething.a

$(top_builddir)/something/src/libsomething.a:
	$(MAKE) -C $(top_builddir)/something/src/ all
