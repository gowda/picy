bin_PROGRAMS = picy picy-v2

picy_SOURCES = main.c
picy_LDADD = $(top_builddir)/this/src/libthis.a  \
	$(top_builddir)/something/src/libsomething.a
picy_CFLAGS = -fPIC -Wall -I$(top_srcdir)/this/src/

picy_v2_SOURCES = main-v2.c
picy_v2_LDADD = $(top_builddir)/something/src/libsomething.a
picy_v2_CFLAGS = -Wall -I$(top_srcdir)/something/src/

$(top_builddir)/something/src/libsomething.a:
	$(MAKE) -C $(top_builddir)/something/src/ all

$(top_builddir)/this/src/libthis.a:
	$(MAKE) -C $(top_builddir)/this/src/ all

