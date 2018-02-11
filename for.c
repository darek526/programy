#include <stdio.h>
#include <stdlib.h>
int main()
{	int licznik;
	for(licznik=0; licznik<10; licznik=licznik +1) /* licz(zwiększaj od 0 do 10) powtórzy 10 razy to co ma w {}
							 z krokiem (odliczaniem) co 1  można zapisać licznik++
				licznik=10; licznik>=2; licznik-- wyświetly w odwrotnej kolejności z skokiem co 1 do 2 włącznie 
				większe równe */
{
	printf(" %i Dobry dzień \n ", licznik); /* %i powoduje numerację wyswietlanych lini tekstu */
}
	return 0;
}
