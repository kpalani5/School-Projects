#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
int n,dgt,sum=0,ct=0,x;
cout<<"Enter a Number: ";
cin>>n;
for (int i = n; i != 0; i=i/10)
{
dgt=i%10;
ct++;
}
for (int j = n; j != 0; j=j/10)
{
dgt=j%10;
x=pow(dgt,ct);
sum=sum+x;
}
if (sum==n)
{
cout<<n<<" is an Armstrong Number.";
}
else
cout<<n<<" is not an Armstrong Number.";
getch();
}
