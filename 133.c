#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    if((a>=b) && (a>=c))
        printf("Najwieksza liczba to: %i", a);
    else if ((b>=c) && (b>=a))
        printf("Najwieksza liczba to: %i", b);
    else if((c>=a) && (c>=b))
        printf("Najwieksza liczba to: %i", c);


    return 0;




}

