#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
char x;
cout<<"Enter a Character: ";
cin>>x;
int n=x;
if (n>=48&&n<=57)
{
cout<<"Two to the power of the number is "<<pow(2,n-48);
}
else
if (x>=65&&x<=90)
{
cout<<"The lower case is "<<char(n+32);
}
else
if (x>=97&&x<=122)
{
cout<<"The upper case is "<<char(n-32);
}
else
{
cout<<"The ASCII value is "<<n;
}
getch();
}
