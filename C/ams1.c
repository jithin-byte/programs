#include<stdio.h>
void main()
{
int n,l1,l2,s,r,c;
	printf("enter lower and upper limit");
	scanf("%d%d",&l1,&l2);
	for(n=l1;n<l2;n++)
	{
		c=n;
		s=0;
		while(n>0)
		{
			r=n%10;
			s=s+r*r*r;
			n=n/10;
		}
		if(c==s)
		{
		printf("%d ",n);
		}
		
	}
}
		
	
