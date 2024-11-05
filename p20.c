#include<stdio.h>
 void main(){
     int n;
     printf("enter the value of n:");
     scanf("%d",&n);
     for(int i=1;i<=7;i++){
         printf("%d",i);
     }
     printf("\n");
      
     for(int i=1;i<=n;i++){
         int s=i+4;
         for(int j=1;j<=4-i;j++){
             printf("%d",j);
         }
         for(int k=1;k<=2*i-1;k++){
             printf(" ");
         }
         {
         for(int j=1;j<=4-i;j++){
             printf("%d",s);
             s++;
         }
      
         printf("\n");
     }
 }
 }