

/********************************************************
*                           *
*********************************************************/
#include <stdio.h>
#include <stdlib.h>
//4#include <conio.h>

int fib(n){
    if ((n==1)||(n==2))
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
void main(void) {
    int n;
    printf("n= ");
    scanf("%d", &n);
    printf("\n %d-ty wyraz ciagu Fie %d\n", n, fib(n));

    return 0;
}
