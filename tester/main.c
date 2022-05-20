#include "../main.h"

#include <stdio.h>

int main(void)
{
  int n = 0;

  n =(_printf("my name is: %s, and Grade: %c, integer: %d, %%\n", "samuel", 'A', 1520));

  printf("n: %d\n", n);
  
  n = (printf("my name is: %s, and Grade: %c, integer: %d, %%\n", "samuel", 'A', 1520));

  printf("n: %d\n", n);

  return (0);
}
