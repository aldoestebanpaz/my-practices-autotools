#include <config.h>
#include <libintl.h>
#include <sqlite3.h>
#include <stdio.h>

#define D_COUNTRIES(x)  dgettext ("iso_3166-1", x)
#define D_CURRENCIES(x) dgettext ("iso_4217", x)

void
run_sqlite_version (void);

int
main (void)
{
  puts ("This is " PACKAGE_STRING ".");

  /*
    Set the program's current locale.
    - category (first argument) determines which parts of the program's current
    locale should be modified. LC_ALL means all the categories.
     - if locale (second argument) is NULL or the empty string "", the locale names
    will be set from the values of environment variables with the same names as
    the above categories.
  */
  setlocale (LC_ALL, "");

  printf ("Argentina official name: %s.\n", D_COUNTRIES("Argentine Republic"));
  printf ("Argentina currency: %s.\n", D_CURRENCIES("Argentine Peso"));

  run_sqlite_version ();

  return 0;
}

void
run_sqlite_version (void) {
    sqlite3 *db;
    sqlite3_stmt *res;

    int rc = sqlite3_open(":memory:", &db);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return;
    }

    // The preferred routine to use is sqlite3_prepare_v2().
    // The sqlite3_prepare() interface is legacy and should be avoided.
    // More info: https://www.sqlite.org/c3ref/prepare.html
    rc = sqlite3_prepare_v2(db, "SELECT SQLITE_VERSION()", -1, &res, 0);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Failed to fetch data: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return;
    }

    rc = sqlite3_step(res);
    if (rc == SQLITE_ROW) {
        printf("SQLITE3 version: %s\n", sqlite3_column_text(res, 0));
    }

    sqlite3_finalize(res);
    sqlite3_close(db);
}
