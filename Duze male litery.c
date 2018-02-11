
#include <stdio.h>
#include <ctype.h>


int main ()
{ 
	int a=0 ,b=0;
	const char tab[20] = "AdjvERopoIwpqWQQpozx";
	int histagram[26] ={0};
	for (int i= 0; i <20 ; ++i){
		if (islower(tab[i])){
			a+=1;
			
		}else if (isupper (tab[i])){
			b+=1;
		}
	}
	
	printf("Ilosc malych liter:%i\n",a );
	printf("Ilosc duzych liter:%i\n",b ); 
	
return 0;	
	
}
