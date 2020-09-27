#include<stdio.h>
void main()
{
int n,a=1,b=0,f=1,s=0;
	printf("enter a limit");
	scanf("%d",&n);
	for(f=1;f<=n;)
	{	s=s+f;
		printf("%d ",f);
		a=b;
		b=f;
		f=a+b;
	}	
	printf("\n ");
	printf("sum is %d\n",s);
}

		
