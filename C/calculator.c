#include<stdio.h>
void main()
{
float a,b,c;
int ch;
	printf("enter your choice");
	printf("\n1.add\n2.substract\n3.multiply\n4.division");
	scanf("%d",&ch);
	re :
	printf("\nenter value of a");
	printf("\nenter value of b");
	scanf("%f%f",&a,&b);
	switch(ch)
	{
	case 1:
		c=a+b;
		printf("the answer is %f",c);
		break;
	case 2:
		c=a-b;
		printf("the answer is %f",c);
		break;
	case 3:
		c=a*b;
		printf("the answer is %f",c);
		break;
	case 4:
		if (b==0)
		{
			printf("division not possible");
			goto re;
		}
		else
		{
			c=a/b;
			printf("answer is %f",c);
		}
		break;
	default :
			printf("enter valid choice");
			break;
	}
	printf("\n ");
}
		

		
