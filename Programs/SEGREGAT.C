#include<stdio.h>
#include<conio.h>
int main()
{
	int a[8]={1,0,0,1,0,1,1,0},n,i,cnt;
	clrscr();
	n=8;
	cnt=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		cnt++;
	}
	printf("%d",cnt);
	getch();
	return 0;
}