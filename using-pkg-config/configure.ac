AC_INIT([pkgconfig-client-example], [1.0], [bugs@noemail.com], [pkgconfig-client-example], [https://github.com/aldoestebanpaz])

AC_CONFIG_SRCDIR([src/pkgconfig-client-example.c])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_PROG_CC

AC_CONFIG_HEADERS([config.h])


# check presence of pkg-config
AC_MSG_CHECKING([pkgconfig m4 macros])
if test m4_ifdef([PKG_CHECK_MODULES], [yes], [no]) = "yes" && \
	test m4_ifdef([PKG_CHECK_EXISTS], [yes], [no]) = "yes"; then
	AC_MSG_RESULT([yes]);
else
	AC_MSG_RESULT([no]);
	AC_MSG_ERROR([pkgconfig is required. See pkg-config.freedesktop.org])
fi


# check pkg-config variables defined in iso-codes
dnl The ISO Codes package (https://salsa.debian.org/debian/iso-codes) contains a
dnl list of country, language and currency names.
PKG_CHECK_EXISTS([iso-codes], [have_iso_codes=yes], [have_iso_codes=no])
if test "x$have_iso_codes" = "xyes"; then
	AC_MSG_CHECKING([whether iso-codes has iso-3166-1 and iso-4217 domains])
	if $PKG_CONFIG --variable=domains iso-codes | grep iso_3166-1 > /dev/null && \
	   $PKG_CONFIG --variable=domains iso-codes | grep iso_4217 > /dev/null ; then
		AC_MSG_RESULT([yes])
	else
		AC_MSG_RESULT([no])
		have_iso_codes=no
	fi
fi


# check sqlite3 CFLAGS and LIBS
dnl this macro creates the variable SQLITE_CFLAGS and SQLITE_LIBS
PKG_CHECK_MODULES([SQLITE], [sqlite3])


AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_OUTPUT
