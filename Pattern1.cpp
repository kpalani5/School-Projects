#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n;
char a,b;
cout<<"Enter first Character: ";
cin>>a;
cout<<"Enter second Character: ";
cin>>b;
cout<<"Enter number of lines: ";
cin>>n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= i; j++)
{
cout<<char(a);
}
for (int k = 1; k <= i-1; k++)
{
cout<<char(b);
}
cout<<endl;
}
getch();
}
