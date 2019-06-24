#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("enter thr no");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(j=1;lj<=9;j++)
		{
			if(j>=4+i||j<=6-i)
			{
				printf("*");

			}
			 else

			 printf(" ");

			}
			printf("\n");
	}
	getch();
	return 0;

}