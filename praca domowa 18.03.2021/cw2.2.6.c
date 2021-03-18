#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int nieujemne(int n, int m)
{
    if(n>=0 && m>=0)
    {
        if(n>0 || m>0)
            return pow(n,m);
        else
            printf("Nie mozna wykonac takiego dzialania\n");
    }

}
int main()
{
    printf("%d",nieujemne(7,3));
}
