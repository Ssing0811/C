#include<stdio.h>
void main(){
    //int n;
    //printf("enter the value of n:");
    //scanf("%d",&n);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i+j==6||i==j){
                printf("*");
            }
            else
            {printf(" ");}
        }
        printf("\n");
    }
}