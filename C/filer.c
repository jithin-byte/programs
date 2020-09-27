#include<stdio.h>
#include<stdlib.h>
void main()
{
char name[10],ch;
FILE *fp;
	printf("enter name of file to be searched");
	scanf("%s",name);
	fp=fopen(name,"r");
	if(name==NULL)
	{
		printf("file does not exist");
		exit;
	}
	else
	{
		ch=getc(fp);
		while(ch!=EOF)
		{
			printf("%c",ch);
			ch=getc(fp);
		}
		fclose(fp);
	}
}
		
		
		
