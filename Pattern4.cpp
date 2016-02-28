#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,a,b;
char x;
cout<<"Enter a Character: ";
cin>>x;
cout<<"Enter Number of Lines: ";
cin>>n;
a=2*n-1;
b=0;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= b; j++)
{
cout<<" ";
}
for (int k = 1; k <= a; k++)
{
cout<<char(x);
}
a=a-2;
b=b+1;
cout<<endl;
}
getch();
} 
