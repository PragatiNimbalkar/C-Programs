#include<stdio.h>
#include<conio.h>
int main()
{
       int a1[]={1,3,4,5,7};
       int a2[]={2,3,5,6};
       int m=sizeof(a1)/sizeof(a1[0]);
       int n=sizeof(a2)/sizeof(a2[0]);
       clrscr();
       printIntersection(a1,a2,m,n);
       getch();
       return 0;
}
printIntersection(int a1[],int a2[],int m,int n)
{       int i=0,j=0;
	while(i<m && j< n)
	{
		if(a1[i]>a2[j])
		{
		       //	i++;
			j++;
		}
		else if(a1[i]<a2[j])
		{
			i++;
		}
		else
		{
			printf("%d",a2[i]);
			i++;
			j++;
		}

	}
}