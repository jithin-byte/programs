#include<stdio.h>
void main()
{
int a,b,c,l;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	l=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d is greatest",l);
}

