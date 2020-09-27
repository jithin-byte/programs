#include<stdio.h>
#include<string.h>
void main()
{
char a[100],ch;
int i=0,w=1,ln=1,c=0;
	printf("enter a string to be analyased");
	do
	{	
		ch=getchar();
		a[i]=ch;
		i++;
	}while(ch!='1');
	for(i=0;a[i]!='1';i++)
	{
		if(a[i]==' ' && a[i+1]!=' ')
		{
			w++;
		}
		else if(a[i]=='\n')
		{
			ln++;
		}
		else
		{
			if(a[i]!='\n')
			{	
				c++;
			}
		}
	}
	printf(" %d %d %d\n",w+1,ln,c);
}
