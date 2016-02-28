#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,sum=0,count=0;
cout<<"Enter a Number: ";
cin>>n;
cout<<"The factors are: "<<endl;
for (int i= 1; i <= n; i++)
{
if (n%i==0)
{
count++;
sum=sum+i;
cout<<i<<endl;
}
}
cout<<"The number of factors are "<<count<<endl;
cout<<"The sum of the factors is "<<sum<<endl;
getch();
}
