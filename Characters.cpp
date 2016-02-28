#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
char ch;
cout<<"Enter a character: ";
cin>>ch;
if (('a'<=ch&&ch<='z')||('A'<=ch&&ch<='Z'))
 {
  if ('a'<=ch&&ch<='z')
   {
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	cout<<ch<<" is a lower case vowel.";
	else
	cout<<ch<<" is a lower case consonant."; 
   }
  else
   {
	if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	cout<<ch<<" is an upper case vowel.";
	else
	cout<<ch<<" is an upper case consonant.";
   }
 }
else 
  {
   if (ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9') 
	{
	 if (ch=='0'||ch=='2'||ch=='4'||ch=='6'||ch=='8') 
	 cout<<ch<<" is an even digit.";
	 else 
	 cout<<ch<<" is an odd digit.";
	}
   else 
   cout<<ch<<" is not an alphabet or a digit.";
  }
getch();
}
