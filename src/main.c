#include <this.h>

#include <stdio.h>

int main (int argc, char *argv[])
{
  int *array = NULL;
  int limit = 10, idx = 0;

  array = series(limit);

  printf ("fibonacci series upto %d is: ", limit);

  for (idx = 0; idx < limit; idx++)
    printf ("%d ", array[idx]);

  printf ("\n");

  return 0;
}
