#!/bin/sh

aclocal
(libtoolize --automake --copy --force || glibtoolize --automake --copy --force)
autoconf
automake --add-missing --copy --foreign