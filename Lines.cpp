#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int m,n,o;
cout<<"Enter number of lines: ";
cin>>m;
cout<<"Enter lower limit of number to be displayed: ";
cin>>n;
cout<<"Enter upper limit of number to be displayed: ";
cin>>o;
cout<<"\n";
if (o<n) 
cout<<"Upper limit has to be greater";
else
{
for (int i = 1; i <= m; i++)
{
for (int j = n; j <= o; j++)
cout<<j<<"\t";
cout<<"\n"<<endl;
}
}
getch();
}

