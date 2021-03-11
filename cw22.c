#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char zdanie[256];
    int i=0, j=0;

    while(zdanie[i-1]!='#')

    {

    scanf("%c", &zdanie[i]);
    i++;
    }
    while(j<strlen(zdanie))
    {
    printf("'%c' : ", zdanie[j]);
    printf("%d ", zdanie[j]);
    if(j%8==0 && j>0)
        printf("%c", '\n');
    j++;
    }
}
