SUBDIRS = src

# _DATA primary is for installation of miscellaneous data files.
#   By default, data files are not included in a distribution.
#   Of course, you can use the dist_ prefix to change this.
# doc_DATA means "install these files in the location defined by the standard variable $(docdir)".
#   docdir is defined as ${datarootdir}/doc/${PACKAGE} that can be translated like
#   /usr/local/share/doc/hello in this case.
#   More info: https://www.gnu.org/software/automake/manual/automake.html#Standard-Directory-Variables.
# dist_ prefix is for making the file part of the distributed tarball.
#   automake automatically distributes any README file it encounters (the list
#   of other files automatically distributed is presented by automake --help) but
#   we use dist_doc_DATA here for additionally making it part of the installation too.
dist_doc_DATA = README

# For this example, the DISTFILES for deistribution was:
# srcdir = .
# top_srcdir = .
# DIST_SOURCES =
# ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
# am__aclocal_m4_deps = $(top_srcdir)/configure.ac
# am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) $(ACLOCAL_M4)
# am__DIST_COMMON = $(srcdir)/Makefile.in $(srcdir)/config.h.in INSTALL README compile depcomp install-sh missing
# DIST_COMMON = $(srcdir)/Makefile.am $(top_srcdir)/configure $(am__configure_deps) $(dist_doc_DATA) $(am__DIST_COMMON)
# DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
