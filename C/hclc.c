#include<stdio.h>
void main()
{
int hcf=1,lcm,n1,n2,i=1;
	printf(" enter two numbers");
	scanf("%d%d",&n1,&n2);
	while(i<=n1 && i<=n2)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf=i;
		}
		i=i+1;
	}
	lcm=(n1*n2)/hcf;
	printf("lcm and hcf of the numbers are %d and %d respevtivly",lcm,hcf);
	printf("\n");
}
