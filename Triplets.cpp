#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float a,b,c;
cout<<"Enter first Number: ";
cin>>a;
cout<<"Enter second Number: ";
cin>>b;
cout<<"Enter third Number: ";
cin>>c;
if (a>b&&a>c)
{
if (pow(a,2)==pow(b,2)+pow(c,2))
cout<<"The three numbers are Pythagorean Triplets.";
else
cout<<"The three numbers are not Pythagorean Triplets.";
}
else
if (b>a&&b>c)
{
if (pow(b,2)==pow(a,2)+pow(c,2))
cout<<"The three numbers are Pythagorean Triplets.";
else
cout<<"The three numbers are not Pythagorean Triplets.";
}
else
if (c>b&&c>a)
{
if (pow(c,2)==pow(b,2)+pow(a,2))
cout<<"The three numbers are Pythagorean Triplets.";
else
cout<<"The three numbers are not Pythagorean Triplets.";
}
else
cout<<"INVALID";
getch();
}
