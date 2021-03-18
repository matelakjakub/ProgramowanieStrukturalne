#include <stdio.h>

double min(double x, double y);

int main()
{
    double wynik;
    wynik = min(5,5);
    printf("%f\n",wynik);

    return 0;
}

double min(double x, double y)
{

    if(x>y)
        return x;
    if(y>x)
        return y;
    else
        printf("Liczby sa rowne");

}





