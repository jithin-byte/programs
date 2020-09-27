#include<stdio.h>
void main()
{
int n,i,c=0;
	printf("enter a number");
	scanf("%d",&n);
	if(n==1)
	{
		printf("number is not prime");		
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				c=1;
				break;
			}

		}
	
		if(c==1)
		{
			printf("number is not prime ");
		}
		else
		{
			printf("number is  prime\n");
		}
	
	}
	
	
}

