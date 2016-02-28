#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
clrscr();
int a,ct=1,num,x;
x=rand();
cout<<"Guess the Number"<<endl;
cout<<"Guess: ";
cin>>a;
if (a==x)
{
cout<<"You win in 1 try! ";
}
else
{
for (int i = 1; a != x; i++)
{
cout<<"Guess again: ";
cin>>a;
ct++;
}
cout<<"You got the answer after "<<ct<<" tries!";
}
getch();
}
