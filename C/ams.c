#include<stdio.h>
void main()
{
int n,r,l1,l2,c,s=0;
	printf("enter lower and upper limit");
	scanf("%d%d",&l1,&l2);
	re:
	printf("enter a number");
	scanf("%d",&n);
	if(n<l1 && n>l2)
	{
		printf("not in limit range");
		goto re;
	}
	else
	{
		c=n;
		while(n>0)
		{
			r=n%10;
			s=s+r*r*r;
			n=n/10;
		}
		
	}
	if(c=s)
	{
		printf("amstrong");
		printf("\n");
	}
	else
	{
		printf("not amstrong");
		printf("\n");
	}
}
			
