#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,sum=0;
cout<<"Enter a number: ";
cin>>n;
for (int i = 1; i <= n/2; i++)
{
if (n%i==0)
{
sum=sum+i;
}
}
cout<<"The sum of the factors of "<<n<<" other than "<<n<<" is "<<sum<<"."<<endl;
if (sum==n)
cout<<n<<" is a perfect number.";
else
cout<<n<<" is not a perfect number.";
getch();
}
