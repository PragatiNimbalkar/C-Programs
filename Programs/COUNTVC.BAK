#include<iostream.h>
#include<conio.h>
#include<String.h>
int main()
{
	char str[10],ch;
	int len,consonant=0,vowel=0,spetialchar=0,digit=0,i;
	cout<<"enter the string";
       //	gets(str);
       cin>>str;
       len=strlen(str);
	for(i=0;i<len;i++)
	{
		ch=str[i];
		if((ch>='a'&&ch<='z')&&(ch>='A'||ch<='Z'))
		{
		       //	ptintf("Alphabate %c",str[i]);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o')
			{
				vowel++;
			     //	cout<<"vowel is:"<<vowel;
			}
			else
			{
				consonant++;
			      //	cout<<"conc is:"<<consonant;
			}
		}
		else if(ch>=0 && ch<='9')

		{
		digit++;
		}//cout<<"no";
		else
		{spetialchar++;
	}  }
		 cout<<"vowel : "<<vowel<<endl;
		 cout<<"consoant : "<<consonant<<endl;
		 cout<<"digit :"<<digit<<endl;
		 cout<<"spetialchar is :"<<spetialchar<<endl;

	getch();
	return 0;

}