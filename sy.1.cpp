#include<stdio.h>
int main()
{
	int a[100],i,n,f=0,num,top,mid,bottom;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter num to search:");
	scanf("%d",&num);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(num==a[mid])
		{
			f=1;
			break;
		}
		if(num>a[mid])
		{
			top=mid+1;
		}
		else
		{
			bottom=mid-1;
		}
	}
	if(f==1)
	printf("number is found..");
	else
	printf("number not found..");
}
