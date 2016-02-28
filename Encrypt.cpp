#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
void main()
{
clrscr();
char S[100],a[2],ch;
int i,n,x,m;
cout<<"Enter number of cryption: ";
cin>>n;
cout<<"Enter E for encryption and D for decryption: ";
cin>>ch;
gets(a);
x=n%26;
cout<<"Enter a sentence: ";
gets(S);
if (ch=='e'||ch=='E')            
{                      
for (i = 0; S[i] != '\0'; i++)
{
S[i]=tolower(S[i]);
if (isalpha(S[i])!=0)
{
if (122-S[i]<x)
{
m=x-26;
cout<<(char)(S[i]+m);
}
else
{
cout<<(char)(S[i]+x);
}
}
else
{
cout<<S[i];
}
}
}
else
if (ch=='d'||ch=='D')
{
for (i = 0; S[i] != '\0'; i++)
{
S[i]=tolower(S[i]);
if (isalpha(S[i])!=0)
{
if (S[i]-97<x)
{
m=x-26;
cout<<(char)(S[i]-m);
}
else
{
cout<<(char)(S[i]-x);
}
}
else
{
cout<<S[i];
}
}
}
getch();
}
