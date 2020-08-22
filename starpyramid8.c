#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	for(j=1;j<=n-i;j++)
    	{
    		printf(" ");
    	}
		for(k=n-i;k<=n;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}
