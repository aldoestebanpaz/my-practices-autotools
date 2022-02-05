AC_INIT([hello], [1.0], [bugs@noemail.com], [hello], [https://github.com/aldoestebanpaz])

dnl Distinguish this package’s source directory from other source directories
dnl that might happen to exist in the file system. The parameter should name a
dnl file that is unique to this package. configure will verify that this file
dnl exists in srcdir, before it runs any other checks.
AC_CONFIG_SRCDIR([src/hello.c])

dnl 'foreign' tells Automake that this package will not follow the GNU Standards.
dnl   GNU packages should always distribute additional files such as ChangeLog, AUTHORS, etc.
dnl   We do not want automake to complain about these missing files in our small example.
dnl   More info: https://www.gnu.org/software/automake/manual/automake.html#Strictness
dnl '-Wall' and '-Werror' ask automake to turn on all warnings and report them
dnl   as errors. We are speaking of Automake warnings here, such as dubious
dnl   instructions in Makefile.am. This has absolutely nothing to do with how
dnl   the compiler will be called, even though it may support options with similar names.
dnl More info: https://www.gnu.org/software/automake/manual/automake.html#List-of-Automake-options
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_PROG_CC

dnl When this macro is called, the configure script replaces ‘@DEFS@’ with -DHAVE_CONFIG_H instead.
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_OUTPUT
