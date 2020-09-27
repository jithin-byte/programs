#include<stdio.h>
int fac(int x);
void main()
{
int f,a;
	printf("enter a number");
	scanf("%d",&a);
	f=fac(a);
	printf("factorial is %d\n",f);
}
int fac(int x)
{
	int temp;
	if(x==1 || x==0)
	{
		return 1;
	}
	else
	{
		temp=x*fac(x-1);
		return temp;
	}
}
	
