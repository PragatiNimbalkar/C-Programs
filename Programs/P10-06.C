

#

include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{

			if(j==i||j==(n+1)-i)
			{       if(i==j)
				{
				printf("/");
				}
				else
				printf("\\");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}




	getch();
	return 0;
}