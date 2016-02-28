#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[100],n,l,m;
cout<<"Enter number of values: ";
cin>>m;
for (int i = 0; i < m; i++)
{
cout<<"Enter term number "<<i+1<<": ";
cin>>A[i];
}
cout<<"Enter number of places to be rotated: ";
cin>>n;
int x=n%m;
for (int j = 1; j <=x ; j++)
{
l=A[0];
for (int k = 0; k <= m-2; k++)
{
A[k]=A[k+1];
}
A[m-1]=l;
}
for (int l = 0; l <= m-1; l++)
{
cout<<A[l]<<endl;
}
getch();
}
