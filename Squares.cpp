#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,m,i,flag=0,j;
cout<<"Enter number: ";
cin>>n;
for (i = 0; i <= n; i++)
{
if(n==i*i)
{
m=i;
flag=1;
break;
}
}
cout<<"\n"<<endl;
if (flag==0)
{
cout<<n<<" is a not perfect square.";
}
else
{
if (n!=1) 
{
cout<<n<<" is a perfect square.\n"<<endl;
cout<<"\n"<<endl;
for (j = 1; j <= m; j++)
{
cout<<".";
}
cout<<endl;
for (i = 1; i <= m-2; i++)
{
cout<<".";
for (j = 1; j <= m-2; j++)
{
cout<<" ";
}
cout<<"."<<endl;
}
for (i = 1; i <= m; i++)
{
cout<<".";
}
}
else
cout<<".";
}
getch();
}
