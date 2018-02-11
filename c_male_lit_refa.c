#include <stdio.h>

void znajdz(const char *tab, int *histagram, char znak, int licz) {
    while((znak=tab[licz]) != 0){
        if ((znak>='a')&&(znak<='z')) {
            ++histagram[znak-'a'];
        }
        ++licz;
    }
}

void wypisz(const int *histagram) {
    for (int x = 0; x < 26 ; ++x) {
        printf("%c->%d ",'a'+x,histagram[x]);
    }
}

int main()
{
    char *tab="Ala ma psa Asa";
    int histagram[26]={0};
    char znak = 0;
    int licz=0;

    znajdz(tab, histagram, znak, licz);
    wypisz(histagram);

    return 0;

}
