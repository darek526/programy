#include <stdio.h>
#include <stdlib.h>

int NWD_iter(int a, int b)
{
    while(a!=b)
        if(a>b)
            a-=b; // to inny zapis <=>  a = a - b;
        else
            b-=a; //to inny zapis <=>  b = b-a
    return a; // lub b - obie zmienne przechowują wynik NWD(a,b)
}
int main()
{
    int a, b;

    printf("Podaj dwie liczby: \n");
    scanf("%i",&a);
    scanf("%i",&b);
    printf("Najwiekszy Wspolny Dzielnik liczby %i i %i to %i\n",a,b,NWD_iter(a,b));
    return 0;
}
