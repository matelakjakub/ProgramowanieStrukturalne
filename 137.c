#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,delta,x1,x2,pdelta,x0;
    printf("Podaj wspolczynniki a,b,c: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta=pow(b,2)-4*a*c;
    pdelta=sqrt(delta);
    if(a==0)
    {
       printf("Rownanie liniowe");
    }
    else if(delta>0)
    {
    x1=(-b-pdelta)/2;
    x2=(-b+pdelta)/2;
    printf("Pierwiastki wynosza %f %f", x1, x2);
    }
    else if(delta==0)
    {
        x0=-b/2*a;
    printf("Pierwiastek wynosi %f", x0);
    }
    else if(delta<0)
        printf("Rownanie nie ma rozwiazan");










}
