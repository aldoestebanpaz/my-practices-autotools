AM_CPPFLAGS = -Ilib -I$(top_srcdir)/lib

# ${localedir} is an Installation Directory Variable
# You should not use these variables except in makefiles. For instance, instead
# of trying to evaluate localedir in configure and hard-coding it in makefiles
# using e.g., ‘AC_DEFINE_UNQUOTED([LOCALEDIR], ["$localedir"], [Locale directory.])’,
# you should add -DLOCALEDIR='$(localedir)' to your makefile’s definition of
# CPPFLAGS (AM_CPPFLAGS if you are also using Automake).
# More info: https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.71/autoconf.html#Installation-Directory-Variables
DEFS = -DLOCALEDIR=\"$(localedir)\" @DEFS@

bin_PROGRAMS = gettext-client-example

gettext_client_example_SOURCES = gettext-client-example.c
