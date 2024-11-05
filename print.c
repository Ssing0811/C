#include<stdio.h>
void main()
{float a,b,c,d,e,per;
printf("enter the marks of subjects");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
per=(a+b+c+d+e)/500.0*100;
printf("the percentage of 5 subjects is :",per);
}