#include <iostream.h>
#include <conio.h>
#include <process.h>
void main()
{
clrscr();
int n,dgt1,dgt2,dgt3;
char ch;
do
{
cout<<"Enter a 3 digit positive number: ";
cin>>n;
if (n<100||n>999)
{
cout<<"Enter only 3 digit positive numbers.";
}
else
{
dgt1=n%10;
dgt2=(n/10)%10;
dgt3=(n/100)%10;
if (dgt2==dgt1+dgt3)
{
cout<<n<<" is a summation number."; 
}
else
cout<<n<<" is not a summation number.";
}
cout<<"\n"<<endl;
cout<<"Enter 'e' to exit: ";
cin>>ch;
cout<<"\n";
}while(ch!='e');
exit(0);
getch();
}
