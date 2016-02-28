#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int x,n,max=0;
cout<<"Enter the number of values to be compared: ";
cin>>n;
for (int i = 1; i <= n; i++)
{
cout<<"Enter Number "<<i<<": ";
cin>>x;
if ((x%5==0)&&(x!=0))
{if (x>max)
max=x;
}
}
if(max==0)
cout<<"There is no multiple of 5";
else
cout<<"The greatest multiple of 5 is "<<max<<endl;
getch();
}
