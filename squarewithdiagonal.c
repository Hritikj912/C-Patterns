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
			if(j>1&&j<n&&i!=1&&i!=n&&i!=j&&j!=n-i)
			printf(" ");
			else if(i==j)
			printf("@");
			else if(j==n-i)
			printf("@");
			else
			printf("*");
		}
		printf("\n");
	}
	
}
