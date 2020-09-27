#include<stdio.h>
struct stud
{
	char name[20];
	int  roll;
	float mark1,mark2,mark3,total,average;
}s[100];
void main()
{
int i,n;
	printf("enter number of students");
	scanf("%d",&n);
	printf("enter student details\n");
	for(i=0;i<n;i++)
	{
		printf("enter name\n");
		scanf("%s",s[i].name);
		printf("enter roll no\n");
		scanf("%d",&s[i].roll);
		printf("enter mark1,mark2,mark3\n");
		scanf("%f%f%f",&s[i].mark1,&s[i].mark2,&s[i].mark3);		
		s[i].total=s[i].mark1+s[i].mark2+s[i].mark3;
		s[i].average=s[i].total/3;
	}
	printf("no\troll\tmark1\t\tmark2\t\tmark3\t\ttotal\t\taverage\n");
	for(i=0;i<n;++i)
	{
		printf("%d\t%d\t%f\t%f\t%f\t%f\t%f\t\n",i+1,s[i].roll,s[i].mark1,s[i].mark2,s[i].mark3,s[i].total,s[i].average);
	}
}

		
