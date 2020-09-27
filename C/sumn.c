#include<stdio.h>
void main()
{
int i=1,n,s=0;
	printf("enter the limit");
	scanf("%d",&n);
	while (i<=n)
	{
		s=s+i;
		i++;
	}
	printf("the sum is %d",s);
	printf("\n ");
}
