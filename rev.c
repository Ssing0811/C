#include<stdio.h>
void main()
{ int n,digit;
  printf("enter the number");
  scanf("%d",&n);
   int rev=0;
  while(n!=0)
  { digit=n%10;
    rev=rev*10+digit;
    n=n/10;
  }
  printf("%d", rev);
}