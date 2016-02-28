#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float basic,da,hra,n,gross;
cout<<"Enter number of Employees: ";
cin>>n;
cout<<"Enter Basic salary: ";
cin>>basic;
hra=basic*20/100;
da=basic*75/1000;
gross=basic+da+hra;
cout<<"Basic salary for "<<n<<" employees is Rs."<<n*basic<<endl;
cout<<"HRA for "<<n<<" employees is Rs."<<n*hra<<endl;
cout<<"DA salary for "<<n<<" employees is Rs."<<n*da<<endl;
cout<<"Gross salary for "<<n<<" employees is Rs."<<n*gross<<endl;
getch();
}
