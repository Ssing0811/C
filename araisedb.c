#include<stdio.h>
void main()
{ int a,b;
  printf("enter the two numbers");
  scanf("%d%d",&a,&b);
  int power=1;
  for(int i=1;i<=b;i++)
  { power=power*a;}
  printf("%d to the power %d is:%d",a,b,power);
}