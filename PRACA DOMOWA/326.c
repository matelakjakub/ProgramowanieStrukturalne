#include <stdio.h>
#include <stdlib.h>

void FUNKCJA(int x, int *y)
{
    *y = x;
}
int main()
{
    int ddd = 4;
    int *y = &ddd;
    printf("Przed przepisaniem: %d\n", *y);
    FUNKCJA(3, &y);
    printf("Po przepisaniu: %d", y);
}
