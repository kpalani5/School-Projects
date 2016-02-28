#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[100],x,i,j,flag;
cout<<"Enter number of values: ";
cin>>x;
for (i = 0; i < x; i++)
{
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];
}
for (i = 0; i < x; i++)
{
flag=0;
for (j = i+1; j < x; j++)
{
if (A[i]==A[j])
{
flag=1;
}
}
if (flag==0)
{
cout<<A[i]<<endl;
}
}
getch();
}                   
