#include<stdio.h>
void swap(int x ,int y);
void main()
{
int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("before sorting a=%d and b=%d\n",a,b);
	swap(a,b);
}
void swap(int x,int y)
{
int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after sorting a=%d and b=%d\n",x,y);
	
}	
