#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ileBialych=0,i=0,ileMalych=0,ileDuzych=0;
    char zdanie;



    while(zdanie!='#')

    {

    scanf("%c", &zdanie);
    if(isspace(zdanie))
        ileBialych++;
    else if(islower(zdanie))
        ileMalych++;
    else if(isupper(zdanie))
        ileDuzych++;
    }
printf("W tym zdaniu jest tyle znakow bialych: %d", ileBialych);
printf("\n");
printf("W tym zdaniu jest tyle znakow malych: %d", ileMalych);
printf("\n");
printf("W tym zdaniu jest tyle znakow duzych: %d", ileDuzych);
}
