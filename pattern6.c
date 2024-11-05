#include<stdio.h>
void main(){
    for(int i=65;i<=69;i++){
        for(int j=70-i;j<=69;j++)
        printf("%c",j);
        printf("\n");
    }
}