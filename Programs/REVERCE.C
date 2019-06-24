#include<stdio.h>
#include<conio.h>
#include<String.h>
int main()
{
	char str[10];
	int len,i;
	printf("enter the string");
	scanf("%c",str);
	len=strlen(str);
	for(i=len-1;i>0;i--)
	{
		printf("%c",str[i]);
	}
				 getch();
				 }