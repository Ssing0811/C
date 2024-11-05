 
#include<stdio.h>
void main(){
     int k;
    for(int i=1;i<=4;i++){
        char s='A'+k-2;
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%c",'A'+k-1);
        }
        for(int l=1;l<=i-1;l++){
            printf("%c",s);
            s--;
        }
          printf("\n");
    }
}