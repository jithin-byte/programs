#include<stdio.h>
void main()
{
int a[30],i,j,n,c;
	printf("enter a limit");
	scanf("%d",&n);
	printf("enter values in random order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	printf("the number in ascending orders are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("the values in descending orders are\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}		
}
		
