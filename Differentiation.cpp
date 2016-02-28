#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
int n,trig,terms;
double a,power,base,exp,constant;
cout<<"DIFFERENTIAL CALCULUS CALCULATOR\n"<<endl;
cout<<"1 - Logarithmic Functions\n"<<endl;
cout<<"2 - Trigonometric Functions\n"<<endl;
cout<<"3 - Exponential Functions\n"<<endl;
cout<<"4 - Polynomial Functions\n"<<endl;
cout<<"5 - Constant Functions\n"<<endl;
cout<<"Enter Choice (1-5): ";
cin>>n;
cout<<"\n";
switch (n)
{
case 1:
{
cout<<"Enter log function: ";
cin>>a;
if (a!=0)
{
cout<<"The differentiation is "<<1/a;
}
else
cout<<"Infinity";
}
break;
case 2:
{
cout<<"sin-1 \n"<<endl;
cout<<"cos-2\n"<<endl;
cout<<"tan-3\n"<<endl;
cout<<"sec-4\n"<<endl;
cout<<"cosec-5\n"<<endl;
cout<<"cot-6\n"<<endl;
cout<<"Enter trig function(1-6): ";
cin>>trig;
switch (trig)
{
case 1:cout<<"The differential is cos";break;
case 2:cout<<"The differential is -sin";break;
case 3:cout<<"The differential is sec^2";break;
case 4:cout<<"The differential is sec*tan";break;
case 5:cout<<"The differential is -cosec^2";break;
case 6:cout<<"The differential is -cosec*cot";break;
default:cout<<"Choose from 1-6.";
}
}
break;
case 3:
{
cout<<"Enter base: ";
cin>>base;
cout<<"Enter exponent: ";
cin>>exp;
cout<<"The differential is "<<pow(base,exp);
}
break;
case 4:
{
cout<<"Give number of terms: ";
cin>>terms;
cout<<"\n";
for (int i = 1; i <= terms; i++)
{
cout<<"Enter Power "<<i<<": x^";
cin>>power;
cout<<"\n";
cout<<"The differential is "<<power<<"x^"<<power-1<<"\n"<<endl;
}
}
break;
case 5:
{
cout<<"Enter constant: ";
cin>>constant;
cout<<"The differential is 0.";
}
break;
default:cout<<"Invalid Choice.";
}
getch();
}
