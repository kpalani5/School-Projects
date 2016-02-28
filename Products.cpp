#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,prod=1;
float x;
cout<<"Enter the number of values to be multiplied: ";
cin>>n;
for (int i = 1; i <= n; i++)
{
cout<<"Enter Number "<<i<<": ";
cin>>x;
prod=prod*x;
}
cout<<"The product is "<<prod;
getch();
}
