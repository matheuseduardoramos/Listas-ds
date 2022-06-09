#include <stdio.h>
#include <stdlib.h>

int main()
{
  float c = 1.5, z = 1.1;
  int t = 0;

  while (z <= c)
  {
    c = c + 0.02;
    z = z + 0.03;
    t++;
  }
  printf("apos %d anos", t);
  return 0;
}
