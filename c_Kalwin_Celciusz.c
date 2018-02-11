#include <stdio.h>
#include <stdlib.h>
/*Wynik
 * 100
temperatura=37.777778*/
    double t;/*zmienna globalna odnosi sie do wszystkich zmiennych
 * zarówno w funkcji main jak i innych*/
double temperatura()/*tu wpisać double t w nawiasach jeśli nie ma zmiennej
 * globalnej */
    {
        double celcjusz;
        celcjusz=(t-32)*5/9;
        return(celcjusz);
    }
int main()
{   double wynik;
   // double t; //jeśli tu mamy zdefiniowaną zmienną t wtedy nalezy wpisać t
    printf("Podaj temperature w Farenharha\n");
    scanf("%lf", &t);
    wynik=temperatura();//tu wpisac t
    printf("%f stopni Farenheita = %f stopni Celsjusz\n",t, wynik);

    return 0;
}
