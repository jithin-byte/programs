#include<stdio.h>
void ams(int x);
void per(int x);
void str(int x);
int  gen(int x);
void main()
{
int ch,num,rt;
	printf("enter a number:");
	scanf("%d",&num);
	printf("enter choice\n1.for amstrong\n2.perfect\n3.strong\n4.general\n:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			ams(num);
			break;
		}
		case 2:
		{
			per(num);
			break;
		}
		case 3:
		{
			str(num);
			break;
		}
		case 4:
		{
			rt=gen(num);
			printf("general root is %d\n",rt);
			break;
		}
		default:
		{
			printf("enter correct choice");
		}
	}
}
void ams(int x)
{
int temp,s=0,r;
	temp=x;
	while(x>0)
	{
		r=x%10;
		s=s+(r*r*r);
		x=x/10;
	}
	if(temp==s)
	{
		printf("number is amstrong\n");
		
	}
	else
	{
		printf("not amstrong\n");
	}
}
void per(int x)
{
int temp,s=0,i;
	temp=x;
	for(i=1;i<=x/2;i++)
	{
		if(x%i==0)
		{
			s=s+i;
		}
	}
	if(temp==s)
	{
		printf("number is perfect\n");
		
	}
	else
	{
		printf("not perfect\n");
	}
}
void str(int x)
{
int s=0,r,temp,i=1,f;
	temp=x;
	while(x>0)
	{
		f=1;
		r=x%10;
		for(i=1;i<=r;i++)
		{
			f=f*i;
		}
		s=s+f;
		x=x/10;
	}
	if(s==temp)
	{
		printf("number is strong\n");
		
	}
	else
	{
		printf("number is not strong\n");
	}
}
int gen(int x)
{
int s=0,r,s2=0,s3=0;
	if(x<10)
	{
		return x;
	}
	else
	{
		while(x>0)
		{
			r=x%10;
			s=s+r;
			x=x/10;
		}
		if(s>10)
		{
			while(s>0)
			{
				r=s%10;
				s2=s2+r;
				s=s/10;
			
			}
			if(s2>10)
			{	while(s2>0)
				{		
					r=s2%10;
					s3=s3+r;
					s2=s2/10;
					return s3;
				}
			}
			else
			{
				return s2;
			}
		}
		else
		{
			return s;
		}
	}
}
			
			






























