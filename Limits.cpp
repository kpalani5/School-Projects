#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a,b,i;
cout<<"Type an integer as the lower limit: "<<endl;
cin>>a;
cout<<"Type an integer as the upper limit: "<<endl;
cin>>b;
cout<<"\n";
if (a>b)
cout<<"The upper limit should be greater than the lower limit.";
else
{
for (i = a; i <= b; i++)
if (a%1==0)
cout<<i<<endl;
}
getch();
}                   
