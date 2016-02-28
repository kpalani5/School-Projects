#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[100],i,j,n,temp;
cout<<"Enter number of values: ";
cin>>n;
for (i = 0; i < n; i++)
{
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];
}
for (i = 0; i < n; i++)
{
cout<<A[i]<<"\t";
}
for (i = 0; i < n; i++)
{
for (j = i+1; j < n; j++)
{
if (A[j]<A[i])
{
temp=A[j];
A[j]=A[i];
A[i]=temp;    
}
}
}
cout<<"\n"<<endl;
cout<<"Ascending order is \n";
for (i = 0; i < n; i++)
{
cout<<A[i]<<"\t";
}
cout<<"\n"<<endl;
cout<<"Descending order is \n";
for (i = n-1; i >= 0; i--)
{
cout<<A[i]<<"\t";    
}
getch();
}
