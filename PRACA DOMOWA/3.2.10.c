#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("%p", essa());
    return 0;
}

int essa(){
    double b;
    double *wskaznik;
    wskaznik = (double*) malloc(b * sizeof(*wskaznik));

    return wskaznik;
}
