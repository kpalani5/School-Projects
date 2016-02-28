#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,sum=0,ct=0,i;
cout<<"Enter Number of Prime Numbers: ";
cin>>n;
cout<<"The first "<<n<<" prime numbers are: "<<endl;
for (i = 2; ct != n; i++)
{
for (int j = 2; j <= i/2; j++)
{
if (i%j==0)
{
sum=1;
break;
}
}
if (sum==0)
{
cout<<i<<endl;
ct++;
}
sum=0;
}
getch();
}
