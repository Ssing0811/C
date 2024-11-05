 #include<stdio.h>
 void main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int nsp=0;
    int nst=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nsp+=1;
        nst-=1;
        printf("\n");
    }
 }