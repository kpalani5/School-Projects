#include <iostream.h>
#include <conio.h>
double factorial(int _)
{
double product = 1;
if (_==0)
{
return 1;
}
if (_<0)
{
return 0;
}
for (int i = 1; i <= _; i++)
{
product=product*i;
}
return product;
}
void main()
{
clrscr();
int n,t,r;
cout<<"Enter an integer to find out its factorial: ";
cin>>n;
cout<<"The factorial of "<<n<<" is "<<factorial(n);
cout<<"\n"<<endl;
cout<<"Enter Number of Terms: ";
cin>>t;
cout<<"Enter the number of elements taken at a time: ";
cin>>r;
cout<<endl;
if (t<r)
{
cout<<"Invalid Entry.";
}
else
{
cout<<"The number of permutations are: ";
cout<<factorial(t)/factorial(t-r);
cout<<"\n"<<endl;
cout<<"The number of combinations are: ";
cout<<factorial(t)/(factorial(r)*factorial(t-r));
}
getch();
}
