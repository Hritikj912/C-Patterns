#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter no. of lines\n");
	scanf("%d",&n);
	if(n%2==0)
	{
	for(i=1;i<=n/2;i++)
	{
		for(j=0;j<i-1;j++)
		{
			printf(" ");
		}
		for(k=n-(2*i-1);k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
	}
for(i=1;i<=n/2;i++)
{
	for(k=n/2;k>i;k--)
	{
		printf(" ");
	}
	for(j=1;j<=2*i-1;j++)
	{
		printf("*");
	}
	printf("\n");
}
}
else
{
	for(i=1;i<=n/2+1;i++)
	{
		for(j=0;j<i-1;j++)
		{
			printf(" ");
		}
		for(k=n-(2*i-1)+1;k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
	}
for(i=1;i<=n/2;i++)
{
	for(k=n/2;k>i;k--)
	{
		printf(" ");
	}
	for(j=1;j<=2*i+1;j++)
	{
		printf("*");
	}
	printf("\n");
}
}
}



