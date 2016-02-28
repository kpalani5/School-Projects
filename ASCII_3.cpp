#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
char ch;
cout<<"Enter a character: ";
cin>>ch;
int b=ch+1;
char x=b;
cout<<"The ASCII character after "<<ch<<" is "<<x<<endl;
int a=ch-1;
char y=a;
cout<<"The ASCII character before "<<ch<<" is "<<y;
getch();
}
