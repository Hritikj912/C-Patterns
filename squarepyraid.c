#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2==1)
			printf("*");
			else if(j%2==1)
			printf("*");
			else if(j%2==0)
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
