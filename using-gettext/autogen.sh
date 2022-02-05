#!/bin/sh
# Run this to generate all the initial makefiles, etc.

PROJECT=gettext-client-example

srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

ORIGDIR=`pwd`
cd $srcdir

test -f src/gettext-client-example.c || {
	echo "You must run this script in the top-level $PROJECT directory"
	exit 1
}

DIE=0

(autoconf --version) > /dev/null 2>&1 || {
	echo
	echo "You must have autoconf installed to compile $PROJECT."
	DIE=1
}

(automake --version) > /dev/null 2>&1 || {
	echo
	echo "You must have automake installed to compile $PROJECT."
	DIE=1
}

if test "$DIE" -eq 1; then
	exit 1
fi

autoreconf --install || echo "autoreconf failed. Review the output"

cd $ORIGDIR

if test -z "$NOCONFIGURE"; then

    if test -z "$*"; then
        echo "Running ./configure with no arguments - if you wish "
            echo "to pass any to it, please specify them on the $0 command line."
    fi

    $srcdir/configure "$@"
    echo
    echo "Now type 'make' to compile $PROJECT."

fi
