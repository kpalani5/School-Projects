#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n;
float max,min,x,a;
cout<<"Enter the number of values to be compared: ";
cin>>n;
cout<<"Enter number 1: ";
cin>>a;
max=a;
min=a;
for (int i = 1; i <= n-1; i++)
{
cout<<"Enter Number "<<i+1<<": ";
cin>>x;
if (x>max)
max=x;
else
if (x<min)
min=x;
}
cout<<"The greatest number is "<<max<<endl;
cout<<"The least number is "<<min<<endl;
getch();
}
