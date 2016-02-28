#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
char ch;
int n,A[1000],val,pos,flag=0;
cout<<"Enter number of values: ";
cin>>n;
for (int i = 0; i <= n-1; i++)
{
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];
}
cout<<"Enter value to be deleted: ";
cin>>val;
for (int j = 0; j <= n-1; j++)
{
if (val==A[j])
{
flag=1;
pos=j;
}
}
if (flag==0)
{
cout<<"No value found in the list.";
}
else
{
for (int k = pos; k <= n-2; k++)
{
A[k]=A[k+1];
}
for (int l = 0; l <= n-2; l++)
{
cout<<A[l]<<endl;	
}
}
getch();
}
