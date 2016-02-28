#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[100],max,min,n,range,i,freq;
cout<<"Enter number of values: ";
cin>>n;
cout<<"Enter value 1: ";
cin>>A[0];
max=A[0];
min=A[0];
for (i = 1; i < n ; i++)
{
cout<<"Enter value "<<i+1<<": ";
cin>>A[i];    
if (A[i]>max)
{
max=A[i];
}
if (A[i]<min)                  s
{
min=A[i];
}
}
cout<<"\n"<<endl;
range=max-min;
cout<<"Maximum Value is "<<max<<"."<<endl;
cout<<"Minimum Value is "<<min<<"."<<endl;
cout<<"The Range is "<<range<<"."<<endl;
cout<<"\n";
cout<<"Enter frequency of classes: ";
cin>>freq;
cout<<"\n";
for (i = 0; i < n; i++) 
{
cout<<A[i]<<" lies in the frequency class "<<A[i]-A[i]%freq<<" to "<<(A[i]-(A[i]%freq))+freq<<".\n"<<endl;	
}
getch();
}
