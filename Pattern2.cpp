#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,a1,b1;
char a,b;
cout<<"Enter first Character: ";
cin>>a;
cout<<"Enter second Character: ";
cin>>b;
cout<<"Enter number of terms: ";
cin>>n;
a1=n;
b1=0;
for (int i = 1; i <= n+1; i++)
{
for (int j = 1; j <= a1; j++)
{
cout<<char(a);
}
for (int k = 1; k <= b1; k++)
{
cout<<char(b);
}
a1--;
b1++;
cout<<endl;
}
getch();
}
