 #include<stdio.h>
void main()
{ int i,x,n,count,a[10];
  printf("enter the length of the array");
  scanf("%d",&n);
  printf("enter the elements of the array");
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);}
  count=0;
  printf("enter the value to be searched");
  for(i=0;i<n;i++)
  { if(a[i]==x)
    count=1;
    break;
  }
  if (count==0)
  { printf("element not found");}
  else{ printf("element not found");}
}



