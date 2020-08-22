#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
		for(k=n-i;k>=0;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}
