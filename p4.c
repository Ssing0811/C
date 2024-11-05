#include<stdio.h>
void main(){
    int n,i,j,a,f;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=i;j++){
            
            f=a+64;
            printf("%c",f);
            a=a+1;
        }
        printf("\n");
    }
}