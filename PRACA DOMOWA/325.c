#include <stdio.h>
#include <stdlib.h>

int rab(int *a, int *b)
{
  int dodi = *a + *b;
  return dodi;
}
int main()
{

    const int a=5, b=8;
    printf("Stałe: a = %d b = %d\n", a, b);
    rab(&a, &b);
    printf("Ich suma: %d", rab(&a, &b));
    return 0;
}
