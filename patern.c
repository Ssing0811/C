 #include<stdio.h>
void main(){
    int a;
    for(int i=1;i<=4;i++){
        a=65;
        for(int j=1;j<=i;j++){
            printf("%c",a);
            a=a+1;
        }
        printf("\n");
    }
}