#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float a,b,c;
double s;
int x;
cout<<"Enter the first side: ";
cin>>a;
cout<<"Enter the second side: ";
cin>>b;
cout<<"Enter the third side: ";
cin>>c;
if ((a+b)>c&&(b+c)>a&&(a+c)>b)
{
cout<<"1 - Area \n2 - Perimeter \nEnter Choice: ";
cin>>x;
if (x==1)
{
s=(a+b+c)/2;
cout<<"The area is "<<sqrt(s*(s-a)*(s-b)*(s-c));
}
else
{if (x==2)
cout<<"The perimeter is "<<a+b+c;
else
cout<<"INVALID CHOICE";
}
}
else
cout<<"The three sides cannot form a triangle";
getch();
}
