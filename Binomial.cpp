#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n;
cout<<"Enter limit: ";
cin>>n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= i; j++)
cout<<j<<" ";
cout<<endl;
}
getch();
}

