#include<stdio.h>
void main()
{
int a,b,c,l,g,p,i;
printf("Enter a b c: ");
scanf("%d%d%d",&a,&b,&c);
i=1;
 while(i<=a)
 {
 if(a%i==0&&b%i==0&&c%i==0)
 {
 g=i;
 i++;
 }
 i=1;
 p=a*b*c;
  while(c<=p)
     {
     if(i%a==0&&i%b==0&&i%c==0)
     {
     l=i;
     break;
     }
     i++;
     }
 }
     printf("GCD: %d\nLCM: %d",g,l);
 }
