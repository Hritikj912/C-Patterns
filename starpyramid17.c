#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k,l;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		 printf(" ");
	    }
		for(k=2*(n-i+1)-1;k>=1;k=k-2)
		{
		printf("*");
		}
		for(l=1;l<=n-i;l++)
		{
		printf("*");
		}
		printf("\n");
	}
	getch();
}
