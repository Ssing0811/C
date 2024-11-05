#include<stdio.h>
int main()
{ char c1='E',c2='5',c3='?',d,e,f,g,h,i,j,k,l;
  printf("%d",c1);
  printf("\n%d",c2);
  printf("\n%d",c3);
  d=c1-c2+c3;
  printf("\n%d",d);
  e=c1-2;
  printf("\n%d",e);
  f=c1-'2';
  printf("\n%d",f);
  g=c3+'#';
  printf("\n%d",g);
  h=c1%c3;
  printf("\n%d",h);
  i='2'+'2';
  printf("\n%d",i);
  j=(c1/c2)*c3;
  printf("\n%d",j);
  k=3*c2;
  printf("\n%d",k);
  l='3'*c2;
  printf("\n%d",l);
  return 0;
}

