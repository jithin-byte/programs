#include<stdio.h>
void main()
{
int n,c,r,s=0,l;
	printf("enter a limit");
	scanf("%d",&l);
	re:
	printf("\enter a number");
	scanf("%d",&n);
	if(n>l)
	{
		printf("limit exceded");
		goto re;
	}
	else
	{
		c=n;
		while(n>0)
		{
			r=n%10;
			s=s*10+r;
			n=n/10;
		}
	}
	if(s=c)
	{
		printf("num is pallindrome");
	}
	else
	{
		printf("not pallindrome");
	}
	printf("\n");
}
			
