#include<stdio.h>
void main()
{
int u;
float r;
	printf("enter the unit");
	scanf("%d",&u);
	if (u>=0 && u<200)
	{	r=u*.50;
		printf("%f is the amount",r);
	}
	else if (u>201 && u<400)
        {
	 	r=100+(u*65);
		printf("%f is the amount",r);
        }
	else if (u>401 && u<600)
        {
	 	r=250+(u*.80);
		printf("%f is the amount",r);
	}
	else if (u>600)
	{	r=390+(u*1.00);
		printf("%f is the amount",r);
	}
}
