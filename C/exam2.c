#include<stdio.h>
#include<string.h>
void main()
{
int i,l,flag=0; 
char str[20];
	printf("enter a string\n");
	scanf("%s",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]!=str[l-1-i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("the string is not palindrome\n");
	}
	else
	{
		printf("the string is palindrome\n");
	}
}
		
