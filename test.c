#include <stdio.h>

int conditional(int x, int y, int z)
{
  return ((~(!!x) + 1) & y) + ((!!x) & z);
}

int main()
{
  printf('%d', conditional(1, 1, 2));
}