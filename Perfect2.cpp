#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float m,n,sum;
cout<<"Enter lower limit: ";
cin>>m;
cout<<"Enter upper limit: ";
cin>>n;
for (int i = m; i <= n; i++)
{
sum=0;
for (int j = 1; j <= i/2; j++)
{
if (i%j==0)
{
sum=sum+j;
}
}
if (sum==i)
{
cout<<i<<" is a perfect number."<<endl;
}
}
getch();
}
