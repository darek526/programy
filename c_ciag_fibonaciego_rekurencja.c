#include <stdio.h>
unsigned long silnia_iteracyjnie(unsigned long podstawa_silni) {
    unsigned long int wynik = 1;
    for (unsigned long int licznik = 2; licznik <= podstawa_silni; licznik++) {
        wynik *= licznik;
    }
    return wynik;
}

unsigned long silnia_rekurencyjnie(unsigned long podstawa_silni) {
    if (podstawa_silni == 1) {
        return 1;
    } else {
        return podstawa_silni * silnia_rekurencyjnie(podstawa_silni - 1);
    }
}

unsigned long silnia_rekurencyjnie_operator(unsigned long podstawa_silni) {
    return (podstawa_silni == 1) ?
           1 : podstawa_silni * silnia_rekurencyjnie_operator(podstawa_silni - 1);
}

int main() {
    unsigned long int n_element;

    printf("Podaj ktory element ciągu Fiboniciego chcesz obliczyć n = ");
    scanf(" %ld", &n_element);
    return 0;
}
