#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
long n;
char ch='c';
while (ch=='c'||ch=='C')
{
cout<<"Enter a Number: ";
cin>>n;
int flag=0;
for (int i = 2; i <= n/2; i++)
{
if (n%i==0)
{                
flag=1;
break;
}
else
flag=0;
}
if (flag==0)
{
cout<<n<<" is a prime number.\n"<<endl;
}
else
cout<<n<<" is a composite number.\n"<<endl;
cout<<"Type 'c' to continue: ";
cin>>ch;
cout<<"\n";
}	
getch();
}
