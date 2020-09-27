#include<stdio.h>
void main()
{
int g;
float c,i;
	printf(" enter foreign currency");
	scanf("%f",&c);
	printf("pls enter your choice");
	printf("\n1.dollar\n2.euro\n3.dinar\n4.pound\n");
	scanf("%d",&g);
	switch(g)
	{
	case 1:
	
		i=c*70;
		printf("%f",i);
		break;
	
	case 2:
	
		i=c*50;
		printf("%f",i);
		break;
	
	case 3:
	
		i=c*80;
		printf("%f",i);
		break;
	
	case 4:
	
		i=c*120;
		printf("%f",i);
		break;
	
	default:
	
		printf("enter correct choice");
		break;
	}
}
	

