#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n;
cout<<"Enter a Limit: ";
cin>>n;
for (int i = n; i >= 1; i--)
{
for (int j=1; j <= i; j++)
cout<<i<<"  ";
cout<<endl;
}
getch();
}
