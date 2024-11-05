#include<stdio.h>
int main()
{ float x=8.8,y=3.5,z=-5.2,a,b,c,e,f,g,h;
  a=x=y=z;
  printf("%f",a);
  b=2*y+3*(x-z);
  printf("\n%f",b);
  c=x/y;
  printf("\n%f",c);
  e=x/(y+z);
  printf("\n%f",e);
  f=(x/y)+z;
  printf("\n%f",f);
  g=2*x/3*y;
  printf("\n%f",g);
  h=2*x/(3*y);
  printf("\n%f",h);
  return 0;
  }
