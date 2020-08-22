#include <stdio.h>
 int main() 
 { int i,j,k,n;
  printf("Enter no. of lines\n");
scanf("%d",&n);
if(n%2==0)
{
for(i=1;i<=n/2;i++)
{
	for(j=n/2-i;j>=0;j--)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("*");
	}
	printf("\n");
}
for(i=1;i<=n/2;i++)
{
	for(k=1;k<=i;k++)
	{
		printf(" ");
	}
	 for(j=n/2-i+1;j>=1;j--)
	{
		printf("*");
	}
	printf("\n");
}
}
else
{
for(i=1;i<=n/2;i++)
{
	for(j=n/2-i+1;j>=0;j--)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("*");
	}
	printf("\n");
}
for(i=1;i<=n/2;i++)
{
	for(k=1;k<=i;k++)
	{
		printf(" ");
	}
	 for(j=n/2+1-i;j>=0;j--)
	{
		printf("*");
	}
	printf("\n");
}
for(i=1;i<=n/2+1;i++)
{
	printf(" ");
}
printf("*");
}
}
