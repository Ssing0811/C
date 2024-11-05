#include<stdio.h>
 void main(){
     int n;
     printf("enter the value of n:");
     scanf("%d",&n);
     for(int i=65;i<=71;i++){
         printf("%c",i);
     }
     printf("\n");
       
     for(int i=1;i<=n;i++){
         char s='A'+i+3;
         for(int j=1;j<=4-i;j++){
             printf("%c",'A'+j-1);
         }
         for(int k=1;k<=2*i-1;k++){
             printf(" ");
         }
         {  
         for(int j=1;j<=4-i;j++){
             printf("%c",s);
             s++;
         }
         
         printf("\n");
     }
 }
 }