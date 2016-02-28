#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
double x,n,sum=0,y,sum1=0,den=1,sum2=1,sum3=0,frac;
int ch;
cout<<"This program calculates sum of infinite series.\n"<<endl;
cout<<"Enter base: ";
cin>>x;
cout<<" "<<endl;
cout<<"Enter limit of exponent: ";
cin>>n;
cout<<" "<<endl;
cout<<"TABLE OF INFINITE SERIES\n"<<endl;
cout<<"1 = x^0 + x^1 + x^2 + x^3 +.......+ x^n\n"<<endl;
cout<<"2 = x^0 - x^1 + x^2 - x^3 +.......+ x^n\n"<<endl;
cout<<"3 = x^0 + x^1/1! + x^2/2! + x^3/3! +.......+ x^n/n!\n"<<endl;
cout<<"4 = x^0 - x^1/1! + x^2/2! - x^3/3! +.......+ x^n/n!\n"<<endl;
cout<<"Enter Choice (1 to 4): ";
cin>>ch;
cout<<" "<<endl;
switch (ch)
{
case 1:
{
for (int i = 0; i <= n; i++)
{
y=pow(x,i);
sum=sum+y;
}
cout<<"The sum of the infinite series is "<<sum<<".";
}
break;
case 2:
{
for (int i = 0; i <= n; i+=2)
{
y=pow(x,i);
sum=sum+y;
}
for (int j = 1; j <= n; j+=2)
{
y=pow(x,j);
sum1=sum1+y;
}
cout<<"The sum of the infinite series is "<<sum-sum1<<".";
}
break;
case 3:
{
for (int i = 1; i <= n; i++)
{
y=pow(x,i);
den=den*i;
frac=y/den;
sum2=sum2+frac;
}
cout<<"The sum of the infinite series is "<<sum2<<".";
}
break;
case 4:
{
for (int i = 1; i <= n; i++)
{
y=pow(x,i);
den=den*i;
frac=y/den;
if (i%2==0)
{
sum2=sum2+frac;
}
else
{
sum3=sum3+frac;
}
}
cout<<"The sum of the infinite series is "<<sum2-sum3<<".";
}
break;
default:cout<<"INVALID CHOICE";
}
getch();
}
