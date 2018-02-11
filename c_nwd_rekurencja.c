#include <stdio.h>
#include <stdlib.h>
int NWD_rek(int a, int b)
{
    if (b != 0) {

        return NWD_rek(b, a % b);
    }
}


int main()
{
    int a, b;

    printf("Podaj dwie liczby: \n");
    scanf("%i",&a);
    scanf("%i",&b);
    printf("Najwiekszy Wspolny Dzielnik liczby %i i %i to %i\n",a,b,NWD_rek(a,b));
    return 0;
}
