#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
double n;
int dgt1,dgt2,sq,i,j,flag=0;
cout<<"Enter a Limit: ";
cin>>n;
for (i = 1; i <= n; i++)
{
sq=i*i;
for (j = i; j!=0 ; j=j/10)
{
dgt1=j%10;
dgt2=sq%10;
sq=sq/10;                   
if (dgt1==dgt2)
{
flag=0;
}
else
{
flag=1;
break;
}
}
if (flag==0)
{
cout<<i<<" is automorphic."<<endl;
}
}
getch();
}
