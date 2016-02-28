#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,dgt1,dgt2,sq,flag=0;
cout<<"Enter a Number: ";
cin>>n;
sq=n*n;
for (int i = n; i != 0; i=i/10)
{
dgt1=i%10;
dgt2=sq%10;
sq=sq/10;
if (dgt1!=dgt2)
{
cout<<n<<" is Not Automorphic.";
flag=1;
break;
}
}
if (flag==0)
{
cout<<n<<" is Automorphic.";
}
getch();
}
 
