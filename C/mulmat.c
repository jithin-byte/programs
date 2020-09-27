#include<stdio.h>
void main()
{
int a[10][10],b[10][10],mul[10][10],m,n,p,q,c,d,k;
	val:
	printf("enter no of rows and coloumns of mat a");
	scanf("%d%d",&m,&n);
	printf("enter no of rows and coloumns of mat b");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("matrix multiplication not possible");
		goto val;
	}
	printf("enter values of mat a\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	printf("enter val of mat b\n");
	for(c=0;c<p;c++)
	{
		for(d=0;d<q;d++)
		{
			scanf("%d",&b[c][d]);
		}
	}
	for(c=0;c<p;c++)
	{
		for(d=0;d<n;d++)
		{
			mul[c][d]=0;
		}
	}
	printf("matrix a is as follows\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			printf("%d\t",a[c][d]);
		}
		printf("\n");
	}
	printf("matrix b is as follows\n");
	for(c=0;c<p;c++)
	{
		for(d=0;d<q;d++)
		{
			printf("%d\t",b[c][d]);
		}
		printf("\n");
	}
	for(c=0;c<m;c++)
	{
		for(d=0;d<q;d++)
		{
			for(k=0;k<p;k++)
			{
				mul[c][d]= mul[c][d]+a[c][k]*b[k][d];
			}
		}
	}
	printf("result is\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<q;d++)
		{
			printf("%d\t",mul[c][d]);
		}
		printf("\n");
	}
}
	

