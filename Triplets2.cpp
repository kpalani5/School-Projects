#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
int a,sum,ct=0,n;
cout<<"Enter Limit: ";
cin>>n;
for (int i = 1; i <= n; i++)
{
for (int j = 0; j <= n-1; j++)
{
for (int k = 0; k <= n-2; k++)
{
a=pow(i+j+k,2);
sum=pow(i,2)+pow(i+j,2);
if (a==sum&&(i+j<=n)&&(i+j+k<=n))
{
ct++;
cout<<i+j+k<<" , "<<i+j<<" and "<<i<<" are Pythagorean Triplets"<<endl;
}
}
}
}
cout<<"Number of Pythagorean Triplets is "<<ct;                   
getch();
}
