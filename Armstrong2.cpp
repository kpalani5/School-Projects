#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
int dgt,x,k,ct,sum,n;
cout<<"Enter Limit: ";
cin>>n;
for (k = 1; k <= n; k++)
{
sum=0;
ct=0;
for (int i = k; i != 0; i=i/10)
{
dgt=i%10;
ct++;
}
for (int j = k; j != 0; j=j/10)
{
dgt=j%10;
x=pow(dgt,ct);
sum=sum+x;
}
if (sum==k)
{
cout<<k<<" is an Armstrong Number."<<endl;
}
}
getch();
}
