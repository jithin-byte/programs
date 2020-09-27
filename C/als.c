#include<stdio.h>
#include<string.h>
void main()
{
int n,l,i,j;
char str[20][20],temp[20];
	printf("enter number of names\n");
	scanf("%d",&n);
	printf("enter names in random order\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%s",str[i]);

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("the list after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",str[i]);
	}
}	
				
	
	
	
