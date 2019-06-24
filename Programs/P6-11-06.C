#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=0;
	clrscr();
	for(i=1;i<=12;i++)
	{
		 i<=4||i<=10&&i>=8?k++:k--;
		for(j=1;j<=4;j++)
		{
		   if(j==k)
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