#include <iostream.h>
#include <conio.h>
double factorial(int a)
{
double prod=1;
if (a!=0)
{
for (int i = 1; i <= a; i++)
{
prod=prod*i;
}
}
if (a==0)
{
prod=1;
}
return prod;
}
double C(int n,int r)
{
double ans=factorial(n)/(factorial(r)*factorial(n-r));
return ans;
}
void main()
{
clrscr();
int m,sp,i,j,k;
cout<<"Enter number of terms : ";
cin>>m;
sp=m;
cout<<"\n"<<endl;
for (i = 0; i <= m; i++)
{
for (j = 1; j <= sp; j++)
{
cout<<" ";
}
for (k = 0; k <= i; k++)
{
cout<<C(i,k)<<" ";
}
sp--;
cout<<endl;
}
getch();
}
