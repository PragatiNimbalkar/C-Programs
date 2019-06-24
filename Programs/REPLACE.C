#include<stdio.h>
#include<conio.h>
int main()
{      char s[109],to,by;
int i;
	printf("enter the string,replace from,replace by");
	gets(s);
	printf("enter the string that you want to replace");
	scanf("%c",&to);
	getchar();


	printf("enter the bword that you want to ");
	scanf("%c",&by);
//	   int i;
	for(i=0;s[i];i++)
	{
		if(s[i]==to)
		{
			s[i]=by;
			//printf("%c",by);
		}

		// printf("%c",s[i]);

	}
      printf("%c with %c=%s",to,by,s);
	getch();
	return 0;
}
