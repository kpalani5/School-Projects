#include <iostream.h>
#include <conio.h>
#include <process.h>
void main()
{
clrscr();
char ch;
int n,pos,i;
float A[100],val;
cout<<"Enter Number of values (<100): ";
cin>>n;
for (i = 0; i <= n-1; i++)
{
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];
}
cout<<"\n";
do
{
cout<<"Enter value to be inserted: ";
cin>>val;
cout<<"Enter position of the value: ";
cin>>pos;
if (pos>n+1)
{
cout<<"Invalid Insertion";
}
else
{
for (i = n-1; i >=pos-1 ; i--)
{
A[i+1]=A[i];
}
A[pos-1]=val;
for (i = 0; i <= n; i++)
{
cout<<A[i]<<endl;
}
n++;
}
cout<<"\n"<<endl;
cout<<"Enter 'e' to exit or 'c' to continue: ";
cin>>ch;
cout<<"\n"<<endl;
}while (ch!='e'&&ch!='E');
exit(0);
getch();
}
