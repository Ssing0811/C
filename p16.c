 #include<stdio.h>.h>
 void main(){
    for(int i=1;i<=4;i++){
         int s=i-1;
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=1;l<=i-1;l++){
            
            printf("%d",s);
            s--;
            
        } 
        printf("\n");
    }
 }