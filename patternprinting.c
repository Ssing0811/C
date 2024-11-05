#include<stdio.h>
void main()
{ int i,j,n;
  char c;
  printf("enter the value of n");
  scanf("%d",&n);
  for(int i=65;i<=n;i++)
  { for(j=65;j<=i;j++){
    printf("%c",j);
  }
  printf("\n");
}}
