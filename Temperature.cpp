#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,hot,cold;
float temp[366],sum,max,min;
cout<<"Enter number of days (<=366): ";
cin>>n;
cout<<" "<<endl;
cout<<"Enter temperature of day 1: ";
cin>>temp[0];
cout<<" "<<endl;
sum=temp[0];
max=temp[0];
min=temp[0];
hot=0;
cold=0;
for (int i = 1; i <= n-1; i++)
{
cout<<"Enter temperature of day "<<i+1<<": ";
cin>>temp[i];
cout<<" "<<endl;
sum=sum+temp[i];
if (max<temp[i])
{
max=temp[i];
hot=i;
}
else
if (min>temp[i])
{
min=temp[i];
cold=i;
}
}
cout<<" "<<endl;
cout<<"Average Temperature is "<<sum/n<<endl;
cout<<" "<<endl;
cout<<"Maximum Temperature is "<<max<<" on day "<<hot+1<<endl;
cout<<" "<<endl;
cout<<"Minimum Temperature is "<<min<<" on day "<<cold+1<<endl;
getch();
} 
