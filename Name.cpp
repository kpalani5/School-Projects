#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
void main()
{
clrscr();
char name[101],ch;
cout<<"Enter your name: ";
gets(name);
cout<<"The length of your name is "<<strlen(name)<<" characters."<<endl;
cout<<"Your name backwards is ";
for (int i = strlen(name) ; i>=0 ; i--)
{
cout<<name[i];    
}
cout<<".\n"<<endl;
cout<<"Enter your gender (enter M or F): ";
cin>>ch;
cout<<endl;
if (ch=='m'||ch=='M')
{
char m[101]="Mr.";
strcat(m,name);
cout<<"You are "<<m<<endl;
}
else
{
if (ch=='f'||ch=='F')
{
char f[101]="Ms./Mrs.";
strcat (f,name);
cout<<"You are "<<f<<endl;
}
else
cout<<"Invalid";
}
getch();
}
