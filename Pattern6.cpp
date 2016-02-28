#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,a,b,c;
char x;
cout<<"Enter a Character: ";
cin>>x;
cout<<"Enter Number of Lines: ";
cin>>n;
for (int o = 1; o <= n-1; o++)
cout<<" ";
cout<<char(x)<<endl;
a=1;
b=n-2;
for (int i = 1; i <= n-2; i++)
{
for (int j = 1; j <= b; j++)
{
cout<<" ";
}
cout<<char(x);
for (int k = 1; k <= a; k++)
{
cout<<" ";
}
cout<<char(x);
b=b-1;
a=a+2;
cout<<endl;
}
for (int p = 1; p <= 2*n-1; p++)
{
cout<<char(x);    
}
getch();
} 
