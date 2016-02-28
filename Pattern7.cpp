#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,a,j;
cout<<"Enter limit(1-26): ";
cin>>n;
a=n;
if (n<=26) 
{
for (int i = 1; i <= n; i++)
{
for (j = 1;  j<=a-n+1 ; j++)
{
cout<<char(64+j);
}
cout<<endl;
a++;
}
}
else
cout<<"Enter numbers only from 1 to 26.";
getch();
}
