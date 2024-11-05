#include<stdio.h>
#include<math.h>
void main()
{ float s1,s2,s3,s,area;
 printf("the three sides of trinagle is :");
 scanf("%f%f%f",&s1,&s2,&s3);
 s=(s1+s2+s3);
 area=sqrt((s)*(s-s1)*(s-s2)*(s-s3));
 printf("the area of circle is %f",area);
} 