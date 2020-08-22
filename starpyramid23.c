#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j||j==n-i+1)
			printf("0");
			else
			printf("*");
		}
		printf("\n");
	}
	
}
