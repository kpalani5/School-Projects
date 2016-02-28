#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,sum=0;
float x;
cout<<"Enter the number of values to be added: ";
cin>>n;
for (int i = 1; i <= n; i++)
{
cout<<"Enter Number "<<i<<": ";
cin>>x;
sum=sum+x;
}
cout<<"The sum is "<<sum;
getch();
}
