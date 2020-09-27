#include<stdio.h>
void main()
{
int  a,b,sum ,*p,*q;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("the sum is %d\n",sum);
}

