#include <stdio.h>

void main() {
    int n,i;
    int fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { fact=fact*i;}

    printf("the factorial of the number is %d",fact);
}