//1,1,2,3,5,8,13,21....
#include<stdio.h>
void main()
{ int i,n,a,b,sum;
  printf("enter the number");
  scanf("%d",&n);
  a=1;
  b=1;
  sum=1;
  for(i=1;i<=n;i++)
  { 
    sum=a+b;
    a=b;
    b=sum;
    printf("%d ",a);
  }
}