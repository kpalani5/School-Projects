#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <string.h>
double APT(double a,double d,long int n)
{
double term=a+(n-1)*d;
return term;
}
double APS(double a,double d,long int n)
{
double sum=n*(2*a+(n-1)*d)/2;
return sum;
}
double GPT(double a,double r,long int n)
{
double term=a*(pow(r,n-1));
return term;
}
double GPS(double a,double r,long int n)
{
double sum=0;
for (long int i = 0; i <= n-1; i++)
{
sum=sum+(a*(pow(r,i)));
}
return sum;
}
void main()
{
clrscr();
char ch[10];
double a,d,r;
long int n;
cout<<"Arithemetic and Geometric Progressions"<<endl;
cout<<"Enter 'AP' for Arithmetic and 'GP' for Geometric: ";
cin>>ch;
cout<<endl;
if (strcmpi(ch,"AP")==0)
{
cout<<"Enter first term: ";
cin>>a;
cout<<"Enter difference: ";
cin>>d;
cout<<"Enter number of terms: ";
cin>>n;
if (n!=floor(n))
{
cout<<"Invalid number of terms.";
}
cout<<"The last term is "<<APT(a,d,n);
cout<<endl;
cout<<"The sum of the terms is "<<APS(a,d,n);
}
else
if (strcmpi(ch,"GP")==0)
{
cout<<"Enter first term: ";
cin>>a;
cout<<"Enter ratio: ";
cin>>r;
cout<<"Enter number of terms: ";
cin>>n;
if (n!=floor(n))
{
cout<<"Invalid number of terms.";
}
cout<<"The last term is "<<GPT(a,r,n);
cout<<endl;
cout<<"The sum of the terms is "<<GPS(a,r,n);
}
else
cout<<"Invalid choice.";
getch();
}
