#include<stdio.h>
void main()
{
int n,a=1,b=1,f=0;
	printf("enter a limit");
	scanf("%d",&n);
	for(n;n>0;--n)
	{
		printf("%d ",f);
		a=b;
		b=f;
		f=a+b;
	}	
	printf("\n ");
}

