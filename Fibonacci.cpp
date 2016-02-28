#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a=0,b=1,x,y,n,ct;
cout<<"Enter the number of terms: ";
cin>>n;
cout<<a<<endl;
cout<<b<<endl;
for(ct=1;ct<=n-2;ct++)
{
x=a+b;
cout <<x<<endl;
y=a;
a=b;
b=x;
}
getch();
}
