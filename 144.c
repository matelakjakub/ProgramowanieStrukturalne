#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,a,silnia;
    printf("Podaj liczbe calkowita dodatnia:");
    scanf(" %i", &a);
    silnia=1;

    for( i=2;i<=a;i++)
        silnia*=i;

    printf("Silnia wynosi: %i", silnia);


}
