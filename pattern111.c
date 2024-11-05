#include<stdio.h>
void main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=5-i;j++){printf(" ");}
        for(int k=1;k<=i;k++){printf("%d",k);}
        for(int l=i-1;l>=1;l--)
        {   
            printf("%d",l);}
            
        printf("\n");
    
     
}}
