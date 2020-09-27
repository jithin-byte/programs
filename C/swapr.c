#include<stdio.h>
int swap(int *x ,int *y);
void main()
{
int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("before sorting a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("after sorting a=%d and b=%d\n",a,b);
}
int swap(int *x,int *y)
{
int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
}	
