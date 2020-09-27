#include<stdio.h>
void main()
{
int f;
float c;
	printf("enter temperature in farenheit");
	scanf("%d",&f);
	c=(f-32)*5/9;
	printf("the temperature in celsius is %f:",c);
}
