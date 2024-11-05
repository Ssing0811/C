#include<stdio.h>
void main(){
    //int n;
    //printf("enter the value of n:");
    //scanf("%d",&n);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            if(j==i-1||i+j==5){
                printf("0");
            }
            else
            {printf("1");}
        }
        printf("\n");
    }
}