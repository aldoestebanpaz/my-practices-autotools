AC_INIT([glib-client-example], [1.0], [bugs@noemail.com], [glib-client-example], [https://github.com/aldoestebanpaz])

AC_CONFIG_SRCDIR([src/glib-client-example.c])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_PROG_CC

dnl When this macro is called, the configure script replaces ‘@DEFS@’ with -DHAVE_CONFIG_H instead.
AC_CONFIG_HEADERS([config.h])


PKG_CHECK_MODULES([GLIB2], [glib-2.0])


AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_OUTPUT
