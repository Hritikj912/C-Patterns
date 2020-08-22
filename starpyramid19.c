#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k,l;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n-i;j++)
    	{
    		printf(" ");
		}
		for(j=i;j<=n;j++)
    	{
    		printf("%d",j);
}
		printf("\n");
	}
	getch();
}
