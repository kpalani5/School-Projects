#include <iostream.h>
#include <conio.h>
#include <process.h>
void main()
{
clrscr();
float marks[10000],target,ct,n;
char ch;
cout<<"Enter number of students: ";
cin>>n;
for (int i = 0; i <= n-1; i++)
{
cout<<"Enter marks of student "<<i+1<<": ";
cin>>marks[i];
}
do
{
cout<<"Enter pass mark: ";
cin>>target;
ct=0;
for (int j = 0; j <= n-1; j++)
{
if (marks[j]>=target)
{
ct++;
}
}
cout<<"Number of students clearing the exam are "<<ct;
cout<<"\n"<<endl;
cout<<"Enter 'e' to exit or 'c' to continue: ";
cin>>ch;
cout<<"\n"<<endl;
}while(ch!='e'&&ch!='E');
exit(0);
getch();
}
