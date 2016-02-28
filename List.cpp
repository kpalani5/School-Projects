#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n;
double A[10000],sum;
cout<<"Enter number of values: ";
cin>>n;
cout<<"\n"<<endl;
for (int i = 0; i <= n-1; i++)
{
cout<<"TRANSACTION "<<i+1<<"\n"<<endl;
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];
cout<<"Enter value to be added: ";
cin>>sum;
cout<<"The changed value is "<<A[i]<<" + "<<sum<<" = "<<A[i]+sum;
cout<<"\n"<<endl;
cout<<"\n";
}
getch();
}
