#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
int ct=0,n,x=0,dgt,i,a;
cout<<"Enter a number: ";
cin>>n;
a=n;
for (i = n; i != 0; i=i/10)
{
dgt=i%10;
ct++;
x=(x*10)+dgt;
a=a/10;
}
if (a!=0);
cout<<"The reverse of "<<n<<" is "<<x<<"."<<endl;
if (x==n)
{
cout<<"The number is a palindrome.";
}
else
cout<<"The number is not a palindrome.";
getch();
}   
