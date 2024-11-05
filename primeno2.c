#include<stdio.h>
void main()
{ int i,n,flag=0;
  printf("enter the number");
  scanf("%d",&n);
  for(i=2;i<=n-1;i++)
  { if(n%i==0)
   { flag=1;
    break;
   }}
if(n==1)printf("neither prime nor composite");
else if(flag==0)printf("prime number");
else printf("composite number");
}