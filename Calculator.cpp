#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
double a,b;
int x;
cout<<"CALCULATOR"<<endl;
cout<<"\n";
cout<<"Type the first number: ";
cin>>a;
cout<<"Type the second number: ";
cin>>b;
cout<<"\n";
if (a<=99999999&&b<=99999999)
{
cout<<" 1-Addition \n\n 2-Subtraction \n\n 3-Multiplication \n\n 4-Division \n\n 5-Sum of squares(a^2+b^2) \n\n 6-Square of sum((a+b)^2) \n\n 7-Difference of squares(a^2-b^2) \n\n 8-Square of Difference((a-b)^2) \n\n 9-Cube of sum((a+b)^3) \n\n 10-Cube of Difference((a-b)^3) \n\n 11-Sum of cubes(a^3+b^3) \n\n 12-Difference of cubes(a^3-b^3) \n\n 13-Square of product(a^2xb^2) \n\n 14-Cube of product(a^3xb^3) \n\n 15-Square of quotient(a^2/b^2) \n\n 16-Cube of quotient(a^3/b^3) \n \n";
cout<<"Choose from one of these 16 options: ";
cin>>x;
switch(x)
{
case 1:cout<<"The sum is "<<a+b;break;
case 2:cout<<"The difference is "<<a-b;break;
case 3:cout<<"The product is "<<a*b;break;
case 4:cout<<"The quotient is "<<a/b;break;
case 5:cout<<"The sum of the squares is "<<pow(a,2)+pow(b,2);break;
case 6:cout<<"The square of the sum is "<<pow(a+b,2);break;
case 7:cout<<"The difference of the squares is "<<pow(a,2)-pow(b,2);break;
case 8:cout<<"The square of the difference is "<<pow(a-b,2);break;
case 9:cout<<"The cube of the sum is "<<pow(a+b,3);break;
case 10:cout<<"The cube of the difference is "<<pow(a-b,3);break;
case 11:cout<<"The sum of the cubes is "<<pow(a,3)+pow(b,3);break;
case 12:cout<<"The difference of the cubes is "<<pow(a,3)-pow(b,3);break;
case 13:cout<<"The square of the product is "<<pow(a*b,2);break;
case 14:cout<<"The cube of the product is "<<pow(a*b,3);break;
case 15:cout<<"The square of the quotient is "<<pow(a/b,2);break;
case 16:cout<<"The cube of the quotient is "<<pow(a/b,3);break;
default:cout<<"Invalid choice";break;
}
}
else
cout<<"Values are not Compatible";
getch();
}
