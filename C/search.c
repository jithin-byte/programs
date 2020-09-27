#include<stdio.h>
void main()
{
int a[10],n,i,key,p,f;
	printf("enter a limit");
	scanf("%d",&n);
	printf("enter values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			f=1;
			p=i+1;
			break;
		}
		else
		{
			f=0;
		}
	}
	if(f=1)
	{
		printf("key found at %d\n",p);
	}
	else
	{
		printf("key not found\n");
	}
}
