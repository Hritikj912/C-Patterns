#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,l,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
		for(j=1;j<=n-i;j++)
     	{
    		printf(" ");
    	}
		for(l=1;l<=i;l++)
		{
			printf("*");
		}
		printf("\n");
		for(j=1;j<=i;j++)
     	{
    		printf(" ");
    	}	
		for(l=1;l<=n-i;l++)
		{
			printf("*");
		}
    	printf("\n");
	}
	getch();
}
