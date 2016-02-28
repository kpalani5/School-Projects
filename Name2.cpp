#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
void main()
{
clrscr();
char name[101],ch;
int i,flag;
cout<<"Enter your name: ";
gets(name);
cout<<endl;
cout<<"Your backward case name is: ";
for (i = 0; name[i] != '\0' ; i++)
{
if ((int)name[i]>=65&&(int)name[i]<=90)
{
name[i]=(char)((int)name[i]+32);
}
else
if ((int)name[i]>=97&&(int)name[i]<=122)
{
name[i]=(char)((int)name[i]-32);
}
}
puts(name);
cout<<endl;
cout<<"Enter the letter you want to search: ";
cin>>ch;
cout<<endl;
for (i = 0; name[i] != '\0' ; i++)
{
flag=0;
if (((int)name[i]==(int)ch)||((int)name[i]==(int)ch-32&&(int)ch>=97&&(int)ch<=122)||((int)name[i]==(int)ch-32&&(int)ch>=65&&(int)ch<=90))
{
flag=1;
}
if (flag==1)
{
cout<<(char)ch<<" is character number "<<i+1<<endl;
}
}
getch();
}
