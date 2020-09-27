#include<stdio.h>
void main()
{
int a[10][10],b[10][10],sum[10][10],m,n,c,d;
	printf("enter numbers of rows and columns");
	scanf("%d%d",&m,&n);
	printf("enter values of first matrix\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	printf("enter values of second matrix\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&b[c][d]);
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
	printf("matrix b is as folows\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			printf("%d\t",b[c][d]);
		}
		printf("\n");
	}
	printf("result is\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			sum[c][d]=a[c][d] + b[c][d];
			printf("%d\t",sum[c][d]);
			sum[c][d]=0;
		}
		printf("\n");
	}
}
