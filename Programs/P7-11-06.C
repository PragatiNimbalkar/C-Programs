#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	    k==1;
	clrscr();
	for(i=1;i<=9;i++)
	{
       //	k==1;
		for(j=1;j<=17;j++)
		{
			if(j>=10-i&&j<=8+i&&k)
			{
				printf("%d",i);
				k=0;
			}
			else
			{
			printf(" ");
			k=1;
			}
		}
		printf("\n");

	}
	getch();
	return 0;
}