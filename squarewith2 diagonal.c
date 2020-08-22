#include<stdio.h>
void main()
{
	int i,j,k,n,l=1;
	printf("ENTER NO. OF LINES\n");
	//ENTER ODD NUMBER OF LINES FOR BETTER PATTERN
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>1&&j<n&&i!=1&&i!=n&&i!=j&&i!=n-j+1)
			printf(" ");
			else if(i==j&&j!=n/2+1)
			printf("%c",l);
			else if(i==j&&j==n/2+1)
			printf("A");
			else if(i==n-j+1&&j!=n/2+1)
			printf("%c",l);
			else
			printf("*");
		}
		printf("\n");
	}
	
}
