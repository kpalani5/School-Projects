#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
double a,b,c;
cout<<"QUADRATIC CALCULATOR \n";
cout<<" \n";
cout<<"Enter first co-effecient: ";
cin>>a;
cout<<"Enter second co-effecient: ";
cin>>b;
cout<<"Enter third co-effecient: ";
cin>>c;
cout<<" \n";
if (a!=0)
 {if (b*b-4*a*c>=0)
 cout<<"The roots are "<<(-b+sqrt(b*b-4*a*c))/2*a<<" and "<<(-b-sqrt(b*b-4*a*c))/2*a;
 else
 cout<<"The roots are imaginary";
 }
else
cout<<"The first co-effecient cannot be equal to zero.";
getch();
}
