#include <stdio.h>
#include <stdlib.h>


char zad3[] = {'F','E','D','C','B','A','\0'};

int main()
{

for(int i = 0 ; i < 6 ; i++)
{
    for (int j = 0; j <= i; j++)
    {
        printf("%c", zad3[j]);
    }
    printf("%s", "\n");
}

}
