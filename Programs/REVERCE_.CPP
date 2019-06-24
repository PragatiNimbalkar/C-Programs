#include<iostream.h>
#include<conio.h>
#include<String.h>
int main()
{
	char str[10];
	int len,i;
	cout<<"enter the string";
	cin>>str;
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		cout<<" "<<str[i];
	}
				 getch();
				 return 0;


				 }