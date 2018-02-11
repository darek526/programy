#include <stdio.h>
#include <math.h>

int main ()
{
printf("\nKALKULATOR WARTOSCI BINARNYCH. DZIALANIA AND i OR\n\n");
int a, b, wybor;		//zadeklarowanie zmiennych
int wynik;

printf("Podaj pierwsza wartosc A: (tylko 0 lub 1) \n");		//
scanf("%d", &a);											//wczytanie liczby

printf("Podaj druga wartosc B: (tylko 0 lub 1) \n");		//j.w.
scanf("%d", &b);

printf("Podaj jakie dzialanie chcesz wykonac\n");			//j.w.
printf("1 - AND\n2 - OR\n3 - XOR\n\nTwoj wybor to: \n");
scanf("%d", &wybor);   										//wczytanie wyboru

if (wybor==1)
	wynik=a * b;											//wynik dzialania AND
if (wybor==2) 
    if (a==0 && b==0) wynik=0;								//wyniki dzialania OR
    else wynik=1;
    
if (wybor==3) 
    if (a==0 && b==0 || a==1 && b==1) wynik=0;				//wyniki dzialania XOR
    else wynik=1;
    
printf("\nWynik dzialania AND wynosi: %d", wynik);			//wyswietlenie wyniku koncowego
printf("\n\n Kliknij dowolny klawisz");
getch();
return 0;
}
