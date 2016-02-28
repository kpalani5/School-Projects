#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float n,flag=0;
cout<<"Enter a Number: ";
cin>>n;
for (float i = 1; i <= n; i++)
{
if (i*(i+1)/2==n)
{
flag=1;
break;
}
else
flag=0;
}
if (flag==1)
{
cout<<n<<" is a triangular number.";
}
else
cout<<n<<" is not a triangular number.";
getch();
}
