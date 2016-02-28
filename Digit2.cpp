#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int dgt,n,lim1,lim2,ct=0;
cout<<"Enter lower limit: ";
cin>>lim1;
cout<<"Enter upper limit: ";
cin>>lim2;
if (lim2<lim1)
{
int tmp=lim1;
lim1=lim2;
lim2=tmp;
}
cout<<"Enter digit to be searched: ";
cin>>dgt;
if (dgt<0||dgt>9)
{
cout<<"Enter only a single digit! ";
}
else
{
for (int i = lim1; i <= lim2; i++)
{
for (int j = i; j != 0; j/=10)
{
n=j%10;
if (dgt==n)
{
ct++;
}
}
}
cout<<"The digit "<<dgt<<" occurs "<<ct<<" times from "<<lim1<<" to "<<lim2<<".";
}
getch();
}

/* This program calculates every single digit in the numbers from      *
 * the upper limit to the lower limit.                                 *
 * It does not just calculate the final digit or                       *
 * the first digit in a number but it also accounts for multiple digit *
 * number.                                                             *
 * For example ,                                                       *
 * 33 has 2 3's and this is not counted as a single 3. The program     *
 * will calculate the count of 33 as having two 3s.                    */                   

// NOTE: The program does not take in decimals , as digits of decimals are debatable. // 
