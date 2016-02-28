#include <iostream.h>
#include <conio.h>
void main()
{
int i,a;
clrscr();
cout<<"Type a number from 1 to 100  and view the number  and the  odd  or even numbers before it."<<endl;
cout<<"Type a number from 1 - 100 : ";
cin>>a;
for (i = a; i >= 0; i-=2)
{
cout<<i;
cout<<" "<<endl;
}
getch();
}

