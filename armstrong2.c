#include<stdio.h>
void main()
{ int i=1;
  while(i<=500)
  { int num=i;
    int orignalnum=num;
    int sum=0;
    while(num>0)
    { int digit=num%10;
      sum=sum+(digit*digit*digit);
      num=num/10;
    }
    if(orignalnum==sum)
    {printf("armstrong numbers are %d\n",orignalnum);}
    i++;
  }}
  