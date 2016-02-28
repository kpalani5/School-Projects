#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,m,small,big,i,j;
cout<<"Enter a Number: ";
cin>>n;
cout<<"Enter another Number: ";
cin>>m;
if (m<=n)
{
big=n;
small=m;
}
else
{
big=m;
small=n;
}
for (i = small; i >= 1; i--)
{
if ((m%i==0)&&(n%i==0))
{
cout<<"HCF is "<<(float)i<<endl;
break;
}
}
for (j = big; j <= m*n; j++)
{
if ((j%n==0)&&(j%m==0))
{
cout<<"LCM is "<<(float)j<<endl;
break;
}
}
cout<<"LCM x HCF = "<<j<<" x "<<i<<" = "<<(float)i*j<<endl;
cout<<"Product of the numbers is "<<m<<" x "<<n<<" = "<<(float)m*n<<endl;
cout<<"LCM x HCF = Product of the numbers."<<endl;
getch();
}
