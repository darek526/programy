 #include<stdio.h>
  int s;
  int silnia(int n)
  {
        if(n==0) s=1;
        else
        {
                silnia(n-1); s=s*n;
        }
  }
  int main()
  {
  int n;
  printf("podaj liczbe: ");
  scanf("%d", &n);
  silnia(n);
  printf("silnia wynosi: %3d", s);        
  }
