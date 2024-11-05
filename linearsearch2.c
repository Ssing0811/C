 #include<stdio.h>
 int linearsearch(int arr[],int size,int element){
  for(int i=0;i<size;i++){
    if(arr[i]==element){
      return i;
    }}
    return -1;
 }

 int main(){ int i;
 int arr[]={1,3,4,5,6,7,8,9};
 int element=6;
 int size=sizeof(arr)/sizeof(int);
 int found= linearsearch(arr,size,element);
 printf("the element %d is found at %d\n position",element,found);
 }
     