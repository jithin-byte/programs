#include<stdio.h>
void main()
{
int a,b,c,l;
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a>b && a>c)
		printf("%d is the greatest",a);
	
	else 
		if (b>c)
			printf("%d is greater",b);
		
		else
			printf("%d is greater",c);
		

		
}
		
	
