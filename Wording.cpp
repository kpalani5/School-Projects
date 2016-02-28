#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <process.h>
void main()
{
clrscr();
char ch[26],S[101],word[51],store[51][51],ch2[26];
unsigned int n,i,j,x=0;
int k,ct;
cout<<"Enter a sentence: ";
gets(S);
for (i = 0; i < strlen(S); i++)
{
j=0;
while (S[i]!=' '&&S[i]!='\0')
{
word[j++]=S[i++];
}
word[j]='\0';
strcpy(store[x],word);
x++;
}
do
{
cout<<"Enter number of the word: ";
cin>>n;
if (n>x)
{
cout<<"There are only "<<x<<" words in the sentence.";
cout<<endl;
}
else
{
cout<<endl;
cout<<"Enter \"display\" to display the word or enter \"reverse\" to display in reverse :  ";
cin>>ch2;
if (strcmpi(ch2,"display")==0)
{
puts(store[n-1]);
}
else
if (strcmpi(ch2,"reverse")==0)
{
ct=0;
for (i = 0; store[n-1][i] != '\0'; i++)
{
ct++;
}
for (k = ct-1; k >= 0; k--)
{
cout<<store[n-1][k];
}
cout<<endl;
}
else
{
cout<<"Invalid Entry";
cout<<endl;
}
}
cout<<endl;
cout<<"Enter 'exit' to quit the program . Enter any key to continue : ";
cin>>ch;
cout<<"\n"<<endl;
}while(strcmpi(ch,"exit")!=0);
exit(0);
getch();
}
