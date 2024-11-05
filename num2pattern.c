#include<stdio.h>
void main()
{ int i,j;
   
  for(int i=1;i<=4;i++)
  { for(j=1;j<=i;j++){
    if(i==j||i+j==4||i+j==6)
    printf("1");
    else
    printf("0");
  }
  printf("\n");
}}
