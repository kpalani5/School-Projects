#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,sum=0;
cout<<"Enter a Number: ";
cin>>n;
for (int i = 2; i <= n/2; i++)
{
if (n%i==0)
sum=sum+i;
}
if (sum==0)
cout<<n<<" is a prime number.";
else
cout<<n<<" is a composite number.";
getch();
}
