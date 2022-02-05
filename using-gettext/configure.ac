AC_INIT([gettext-client-example], [1.0], [bugs@noemail.com], [gettext-client-example], [https://github.com/aldoestebanpaz])

AC_CONFIG_SRCDIR([src/gettext-client-example.c])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_PROG_CC

AC_CONFIG_HEADERS([config.h])


dnl i18n support from GNU gettext. determines whether GNU gettext is available.

dnl The maintainer can omit from the repository all the files that gettextize
dnl mentions as "copy" using the AM_GNU_GETTEXT_VERSION macro.
dnl The version of the gettext infrastructure that the package wants to use.
dnl It is also the minimum version number of the ‘autopoint’ program.
AM_GNU_GETTEXT_VERSION(0.21)

dnl the first parameter is always 'external'.
dnl If gettext is available:
dnl   Sets the USE_NLS variable to ‘yes’.
dnl   Defines ENABLE_NLS to 1 in the autoconf generated configuration file (usually called config.h).
dnl More info: https://www.gnu.org/software/gettext/manual/gettext.html#AM_005fGNU_005fGETTEXT
dnl NOTE: AM_GLIB_GNU_GETTEXT has been an alternative to AM_GNU_GETTEXT and
dnl AM_GNU_GETTEXT_VERSION, but AM_GLIB_GNU_GETTEXT is now deprecated, and shall
dnl not be used in new code.
AM_GNU_GETTEXT([external])


AC_CONFIG_FILES([
 po/Makefile.in
 Makefile
 src/Makefile
])
AC_OUTPUT
