#include <iostream.h>
#include <conio.h>
void main()
{
int i,a;
clrscr();
cout<<"Type a number from 1 to 100 and view the number and the numbers after it."<<endl;
cout<<"Type a number from 1 - 100 : ";
cin>>a;
for (i = a; i <= 100; i++)
{
cout<<i;
cout<<" "<<endl;
}
getch();
}
