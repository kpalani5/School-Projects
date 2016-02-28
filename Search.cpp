#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,flag=0;
float A[100],val;
cout<<"Enter number of values: ";
cin>>n;
for (int i = 0; i <= n-1; i++)
{
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];
}
cout<<"\n";
cout<<"Enter value to be searched: ";
cin>>val;
for (int i = 0; i <= n-1; i++)
{
if (A[i]==val)
{
cout<<val<<" is found in position number "<<i+1<<endl;
flag=1;
}
}
if (flag==0)
{
cout<<val<<" is not present in the list.";    
}
getch();
}
