//wap to take a integer value and display its half value and take a float value and display its fractional value  
#include<stdio.h>
void main()
{ int n,m,s;
  float r,h;
  printf("enter the integer value");
  scanf("%d",&n);
  m=n/2;
  printf("half value of the integer is %d",m);
  printf("\nenter the float value");
  scanf("%f",&r);
  s=r;
  h=r-s;
  printf("fractional value of the intger is %f",r-s);
}
