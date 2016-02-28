#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int a;
cout<<"C++ Variable Datatypes \n"<<endl;
cout<<"Choose from the variables"<<endl;
cout<<"1. char"<<endl;
cout<<"2. int"<<endl;
cout<<"3. long int"<<endl;
cout<<"4. unsigned int"<<endl;
cout<<"5. float"<<endl;
cout<<"6. double"<<endl;
cout<<"7. long double"<<endl;
cout<<"Write the corresponding number of these datatypes to find their size\n";
cout<<"Choose from 1 to 7: ";
cin>>a;
if (a>=1&&a<=7)
{
switch (a)
{
case 1: cout<<"The size is "<<sizeof(char)<<" byte.";break;
case 2: cout<<"The size is "<<sizeof(int)<<" bytes.";break;
case 3: cout<<"The size is "<<sizeof(long int)<<" bytes.";break;
case 4: cout<<"The size is "<<sizeof(unsigned int)<<" bytes.";break;
case 5: cout<<"The size is "<<sizeof(float)<<" bytes.";break;
case 6: cout<<"The size is "<<sizeof(double)<<" bytes.";break;
case 7: cout<<"The size is "<<sizeof(long double)<<" bytes.";break;
default:cout<<"Invalid Choice";
}
}
else
cout<<"Invalid Choice";
getch();
}
