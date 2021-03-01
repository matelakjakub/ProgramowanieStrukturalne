#include <stdlib.h>
#include <stdio.h>

int main()
{
   float a,b,wynik;
   char c;

   printf("Podaj dwie liczby: ");
   scanf(" %f" " %f" , &a, &b);
   printf("Podaj znak operacji ktora chcesz wykonac: ");
   scanf(" %c", &c);

   if(c=='+')
    wynik=a+b;
if(c=='-')
    wynik=a-b;
if(c=='*')
    wynik=a*b;
if(c=='/')
    wynik=a/b;
if(c=='^')
    wynik=pow(a,b);

   printf("Wynik wynosi %.2f", wynik);

   return 0;





}
