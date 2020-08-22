#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k,l=1,m;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
    	for(j=1;j<=n-i;j++)
    	
    		{
    		printf(" ");
    	}
		for(k=1;k<=i;k=k+1)
		{
			printf("%d",l);
			l++;
		}
	   for(j=1;j<=n-i;j++)
    	{
    		printf(" ");
    	}
		printf("\n");
	}
	getch();
 }
