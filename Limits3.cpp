#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a,b,i,j;
cout<<"Type an integer as the lower limit: "<<endl;
cin>>a;
cout<<"Type an integer as the upper limit: "<<endl;
cin>>b;
cout<<"\n";
if (a>b)
cout<<"The upper limit should be greater than the lower limit.";
else
{
if (a%2==1)
{
for (i = a; i <= b; i+=2)
cout<<i<<endl;
}
else
{
for (j = a+1; j <= b; j+=2) 
cout<<j<<endl;
}
}
getch();
}
