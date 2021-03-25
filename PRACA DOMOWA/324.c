
#include <stdio.h>
#include <stdlib.h>

void zmiana(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    int a=5, b=9;
    printf("Liczby przed zmiana a = %d b = %d\n", a, b);
    zmiana(&a, &b);
    printf("Liczby po zmianie: a = %d b = %d", a, b);
    return 0;
}
