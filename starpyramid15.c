#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {  i<=(n+1)/2?k++:k--;
    	for(j=1;j<=k;j++)
    	{
    		printf("*");
    	}
		printf("\n");
	}
	getch();
 }
