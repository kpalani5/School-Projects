#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,sum,i,j;
cout<<"Enter a Limit: ";
cin>>n;
for (i = 2; i <= n; i++)
{
sum=0;
for (j = 2;j <= i/2; j++)
{
if (i%j==0)
sum=sum+j;
}
if (sum==0)
cout<<i<<" is a prime number."<<endl;
}
getch();
}
