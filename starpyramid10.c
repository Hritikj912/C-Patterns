#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=n+1-i;j>=1;j--)
    	{
    		printf("%d",i);
		}
		printf("\n");
	}
	getch();
}
