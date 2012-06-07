#include <something.h>

#include <stdlib.h>
#include <stdio.h>

int *series (int limit)
{
  int *array = NULL;
  int idx = 0;

  array = calloc (limit, sizeof (int));

  for (idx = 0; idx < limit; idx++) {
    array[idx] = fibonacci (idx);
  }

  return array;
}
