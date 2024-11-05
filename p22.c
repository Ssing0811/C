#include<stdio.h>
void main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int min=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<j)min=i;
            else
            min=j;
            printf("%d",min);
        }
        printf("\n");
    }
}