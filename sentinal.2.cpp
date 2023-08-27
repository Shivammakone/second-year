#include<stdio.h>
int sentinal(int a[100],int n,int key)
{
  int last=a[n-1];
  int i=0;
  a[n-1]=key;
  while(a[i]!=key)
    i++;
   if(i<n-1||key==last)
      return i;
  else
    return -1;
}
int main()
{
   int a[100],i,n,key,f;
   printf("Enter limit:");
   scanf("%d",&n);
   printf("Enter n numbers:");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   printf("Enter number to search:");
   scanf("%d",&key);
   f=sentinal(a,n,key);
    if(f==-1)
       printf("Not found");
    else
       printf("Found pos=%d",f);
}
