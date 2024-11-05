//calculation of net salary of the employee
#include<stdio.h>
int main()
{ float bs,da,hra,pf,gs,ns;
  printf("basic salary of the employee");
  scanf("%f",&bs);
  da=0.25*bs;
  hra=0.15*bs;
  gs=bs+da+hra;
  pf=0.10*gs;
  ns=gs-pf;
  printf("net salary of the employee is:%0.2f",ns);
  return 0;
}