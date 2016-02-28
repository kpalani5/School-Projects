#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
void main()
{
clrscr();
char name1[101],name2[101];
cout<<"Enter name 1: ";
gets(name1);
cout<<"Enter name 2: ";
gets(name2);
cout<<"The alphabetical order is:";
cout<<endl;
if(strcmpi(name1,name2)<=0)
{
cout<<name1<<endl;
cout<<name2;
}
else
{
cout<<name2<<endl;
cout<<name1;
}
getch();
}
