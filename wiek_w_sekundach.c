//program do konwersji wieku w latach na sekundy
 
#include <stdio.h>        
#include <math.h>         //biblioteka z formulami matematycznymi
#include <stdlib.h>   //biblioteka z komenmdami sterujacymi
 
 
int main()
 
{
     
    int wiek;
    int twoj_wiek_w_sekundach;
    double ilosc_sek_w_roku = 3.156e7;      //ilosc sekund w roku wynosi 3.156 razy 10 do potêgi 7
 
    printf("Podaj swoj wiek: ");
    scanf("%d", &wiek);
    printf("Twoj wiek w sekundach to: %d", twoj_wiek_w_sekundach = wiek*ilosc_sek_w_roku); //mno¿y ilosc podanych lat przez liczbe 3.156 razy 10 podniesione do potêgi 7
    return 0;
     
}
  