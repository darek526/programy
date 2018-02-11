#include <stdio.h>
#include <stdlib.h>
int main()
{	int litera;
	for(litera='A'; litera<='Z'; litera++) /*Wyswietla litera od A do Z w pionowej kolumnie*/
{
	printf("%c", litera);
	puts(""); //przejście do nowego wiersza
}
	return 0;
}
