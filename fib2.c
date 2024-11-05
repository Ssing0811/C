//to find the element in the fibinacco series
#include<stdio.h>
void main()
{ int i,n;
 printf("enter the position");
 scanf("%d",&n);
 int a=1;
 int b=1;
 int sum=1;
 for(i=1;i<=n-2;i++)
 { a=b;
   b=sum;
   sum=a+b;
   
    printf("the element is :%d\t",sum);
}
}