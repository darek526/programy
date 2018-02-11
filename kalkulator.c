#include <stdio.h>
#include <stdlib.h>
int main()
{
	char dzialanie;
	double a, b, iloczyn, iloraz;
	puts("**************KALKULATOR****************");
	puts("-/+*-/+*-/+*-/+*-/+*-/+*-/+*-/+*-/+*-/+*");
	printf("Wybierz dzaialanie [/] [*] [-] [+] \n ");
	scanf("%c", &dzialanie);
	printf("Podaj liczbe a: \n");
	scanf("%lf", &a);
	printf("Podaj liczbe b: \n");
	scanf("%lf", &b);
	switch (dzialanie)
	{
		case '+':
		printf(" Suma a+b =%f \n ", a + b);
		break;
		case '-':
		printf("Roznica a - b = %f \n ", a - b); /* wyswietla a-b= wynik odejmowania nie trzeba wcześniej
							 deklarować odpowiedniej zmiennej jak w
							 przypadku iloczyn i iloraz*/
		break;
		case '*':
		iloczyn = a * b;
		printf("Iloczyn %f * %f =%f \n ", a, b, iloczyn); /* wyswietla wybrane wcześniej wartości liczby a i b  trzeba wcześniej
                                                         zadeklarować zmienną iloczyn
                                                        ważne aby najpierw napisać iloczyn = a*b odrotana kolejność poinformuje o błędzie  */

		break;
		case '/':
		iloraz = a / b;
		if (b!=0)
		{
			printf("Iloraz %f/%f=%f \n ",a, b, iloraz);
		}
		else
		{
			printf(" Nie mogę podzielić %f przez 0 działanie niewykonalne \n ", a);
		}

		break;
		default:
		printf("Błędny znak nie obsługuje takiego działania \n ");
		break;
		}
	return 0;
}
