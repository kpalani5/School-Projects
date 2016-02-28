#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n;
cout<<"Enter Number of terms: ";
cin>>n;
double A[10000];
cout<<"Enter value 1: ";
cin>>A[0];
for (int i = 1; i <= n-1; i++)
{
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];
cout<<"The difference is "<<A[i]<<" - "<<A[i-1]<<" = "<<A[i]-A[i-1]<<endl;
cout<<"\n";
}
getch();
}
