#include<stdio.h>
void main()
{
char name[10];
int rno,m1,m2,i,n;
FILE *fp;	
	fp=fopen("sample.txt","w");
	printf("enter no of students");
	scanf("%d",&n);
	printf("enter details\n");
	for(i=0;i<n;i++)
	{
		printf("enter name\n");
		scanf("%s",name);
		printf("enter roll no\n");
		scanf("%d",&rno);
		printf("enter marks\n");
		scanf("%d%d",&m1,&m2);
		fprintf(fp,"name:%s\nroll:%d\nmark1:%d\nmark2:%d\n",name,rno,m1,m2);
	}
	fclose(fp);
}
