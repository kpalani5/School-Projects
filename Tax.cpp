#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
double income;
cout<<"Enter income in Rupees: ";
cin>>income;
if (income<0)
cout<<"INVALID INPUT";
else
 if (income<=150000)
 cout<<"Exempted from tax payment.";
 else
  if (income<=300000)
   cout<<"Tax to be paid is Rs."<<10*(income-150000)/100;
  else
   if (income<=500000)
	cout<<"Tax to be paid is Rs."<<15000+(20*(income-300000)/100);
   else
	if (income<=1000000)
	 cout<<"Tax to be paid is Rs."<<55000+(30*(income-500000)/100);
	else
     cout<<"Tax to be paid is Rs."<<205000+(33*(income-1000000)/100);
getch();
}
