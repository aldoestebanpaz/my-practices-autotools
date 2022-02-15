#include <config.h>
#include <glib.h>
#include <stdio.h>

void glib_doublelinked_list (void);

int
main (void)
{
  puts ("This is " PACKAGE_STRING ".");

  glib_doublelinked_list ();

  return 0;
}

void
glib_doublelinked_list (void)
{
  // Empty lists initialization.
  GList *string_list = NULL, *number_list = NULL;

  // This is a list of strings.
  string_list = g_list_append (string_list, "item 1");
  string_list = g_list_append (string_list, "item 2");

  // This is a list of integers.
  number_list = g_list_append (number_list, GINT_TO_POINTER (1));
  number_list = g_list_append (number_list, GINT_TO_POINTER (2));

  printf("The first item in string_list is '%s'\n", (char *) g_list_first (string_list)->data);
  printf("The first item in number_list is '%d'\n", GPOINTER_TO_INT (g_list_last (number_list)->data));
}
