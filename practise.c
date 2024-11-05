#include<stdio.h>
int main()
{ int a=8,b=3,c=-5,d,e,f,g,h,i,j,k,l,m;
  d=a+b+c;
  printf ("%d",d);
  e=2*b+3*(a-c);
  printf("\n%d",e);
  f=a/b;
  printf("\n%d",f);
  g=a%b;
  printf("\n%d",g);
  h=a/c;
  printf("\n%d",h);
  i=a%c;
  printf("\n%d",i);
  j=a*b/c;
  printf("\n%d",j);
  k=a*(b/c);
  printf("\n%d",k);
  l=(a*c)%b;
  printf("\n%d",l);
  m=a*(c%b);
  printf("\n%d",m);
  return 0;
}
  
