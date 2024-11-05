#include<stdio.h>
void main(){
    for(int i=1;i<=7;i++){
        printf("%d",i);
    }
    printf("\n");
    
    int nsp=1;
    for(int i=1;i<=3;i++){
        for(int k=1;k<=4-i;k++){
            printf("%d",k);
        }
        printf("\n");
        
    }
    for(int j=1;j<=nsp;j++){
        printf(" ");
    }
    nsp+=2;
    printf("\n");
}