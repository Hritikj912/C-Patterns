#include<stdio.h>
#include<conio.h>
void main()
{
	 int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    if(n%2==0)
    {
	for(i=1;i<=(n/2);i=i+1)
    {
    	for(j=(n/2)-i;j>=1;j--)
    	
    		{
    		printf(" ");
    	}
		for(k=1;k<=i-1;k=k+1)
		{
			printf("*");
		}
		for(k=1;k<=i;k=k+1)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=(n/2);i=i+1)
    {
    	for(j=1;j<i;j++)
    	
    		{
    		printf(" ");
    	}
		for(k=(n/2)-i+1;k>=1;k--)
		{
			printf("*");
		}
		for(k=(n/2)-i;k>=1;k=k-1)
		{
			printf("*");
		}
		printf("\n");
	}
}
else
{
	for(i=1;i<=(n/2)+1;i=i+1)
    {
    	for(j=(n/2)+1-i;j>=1;j--)
    	
    		{
    		printf(" ");
    	}
		for(k=1;k<=i-1;k=k+1)
		{
			printf("*");
		}
		for(k=1;k<=i;k=k+1)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=(n/2)+1;i=i+1)
    {
    	for(j=1;j<=i;j++)
    	
    		{
    		printf(" ");
    	}
		for(k=(n/2)+1-i;k>=1;k--)
		{
			printf("*");
		}
		for(k=(n/2)+1-i-1;k>=1;k=k-1)
		{
			printf("*");
		}
		printf("\n");
	}
}
	getch();
}
