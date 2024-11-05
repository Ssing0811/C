 #include<stdio.h>
 void main()
 { int i,n,originaln,rem,arm=0;
  printf("enter the number");
  scanf("%d",&n);
  originaln=n;
  while(n!=0)
  //for(i=1;i<=500;i++)
  { rem=n%10;
    arm=(rem*rem*rem)+arm;
    n=n/10;}
    if(originaln==arm)
    {printf("armstrong number");
  }
  else{printf("not");}
 }
  