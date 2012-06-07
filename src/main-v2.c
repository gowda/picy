#include <something.h>

#include <stdio.h>

int main (int argc, char *argv[])
{
  int fib = 0;
  int limit = 10, idx = 0;

  printf ("fibonacci series upto %d is: ", limit);

  for (idx = 0; idx < limit; idx++) {
    fib = fibonacci (idx);
    printf ("%d ", fib);
  }

  printf ("\n");

  return 0;
}
