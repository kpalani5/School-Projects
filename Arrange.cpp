#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[100],temp,n,i,j;
cout<<"Enter number of values: ";
cin>>n;
for (i = 0; i < n; i++)
{
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];
}
for (j = 0; j < n; j++) 
{
for (i = 0; i < n; i++)
{
if (A[i]%2==0&&A[j]%2==1)
{
temp=A[i];
A[i]=A[j];
A[j]=temp;
}
}
}
for (i = 0; i < n; i++)
{
cout<<A[i]<<endl;
}
getch();
}
