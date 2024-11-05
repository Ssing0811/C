#include<stdio.h>
void main(){
    //int n;
    //printf("enter the value of n:");
    //scanf("%d",&n);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(j<=4-i){
                printf(" ");
            }
            else
            {printf("*");}
        }
        printf("\n");
    }
}