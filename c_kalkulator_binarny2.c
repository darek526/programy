#include <stdio.h>
int and(int a, int b) {printf("wynik iloczynu logicznego 'AND': %d\n", a&b); return a & b;}
int or(int a, int b) {printf("wynik sumy logicznej 'OR': %d\n", a|b); return a | b;}
int xor(int a, int b) {printf("wynik 'albo' xor logicznego: %d\n", a^b); return a ^ b;}

int main(void)
{  int a, b;   
    char wybor;
    printf("podaj wartosc argumentu a: "); scanf("%i", &a);
    printf("podaj wartosc parametru b: "); scanf("%i", &b);
    printf("podaj dzialanie:\n iloczyn logiczny '*'\n suma logiczna '+'\n xor '-'\n "); scanf(" %c", &wybor);
    if(wybor == '*')
    {and(a,b);}
    else if (wybor == '+')
    {or(a,b);}
    else if (wybor == '-')
    {xor(a,b);}

    else
    {puts("nie znam dzialania");}
    putchar('\n');
    return 0;
}
