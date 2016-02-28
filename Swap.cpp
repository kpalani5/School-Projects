#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enter a Number: ";
cin>>a;
cout<<"Enter another Number: ";
cin>>b;
c=a;
a=b;
b=c;
cout<<"The reverse order is: "<<endl;
cout<<a<<endl;
cout<<b;
getch();
}
