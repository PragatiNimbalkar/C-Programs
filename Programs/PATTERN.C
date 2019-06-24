#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	//printf("Enter the no");
       //	scanf("%d",&n);  (*);
       clrscr();
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
	       {
		if(i-j==2 || j-i==2)
				     {
			printf("*\t");
				    }
	       else if(i==0||j==0||i==4||j==4)
	       {	printf("*\t");
		}
		else if(i==j&&i%2==0)
		{
			printf("*\t");
		}
		else
			printf("\t");
		}
		printf("\n\n");
	}

	getch();
		return 0;

}