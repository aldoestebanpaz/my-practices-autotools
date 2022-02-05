#include <config.h>
#include <libintl.h>
#include <stdio.h>

#define _(str) gettext (str)

int
main (int argc, char *argv[])
{
  puts ("This is " PACKAGE_STRING ".");

#if ENABLE_NLS
  /*
    Set the program's current locale.
    - category (first argument) determines which parts of the program's current
    locale should be modified. LC_ALL means all the categories.
     - if locale (second argument) is NULL or the empty string "", the locale names
    will be set from the values of environment variables with the same names as
    the above categories.
  */
  setlocale (LC_ALL, "");

  /*
    Bind the domain (you can call bindtextdomain multiple times)

    LOCALEDIR (or the default directory if NULL),
    followed by the name of the locale (eg. es),
    the locale category, and the domain name are concatenated:
        LOCALEDIR/locale/LC_category/PACKAGE.mo
    The default value for LOCALEDIR is system specific. For the GNU library, and
    for packages adhering to its conventions, it’s:
        /usr/local/share/locale
    For gettext and dgettext LC_category is always LC_MESSAGES.
  */
  bindtextdomain (PACKAGE, LOCALEDIR);
  /* Use the domain.  */
  textdomain (PACKAGE);
#endif

  puts (_("hello, world!"));

  return 0;
}
