#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float x;
char y;
cout<<"Enter a radius: ";
cin>>x;
cout<<"If you want to find the area type 'A' and if you want to find the circumference type 'C'."<<endl;
cout<<"Type A or C: ";
cin>>y;
(y!='c'&&y!='C')?((y=='a'||y=='A')?cout<<"The area is "<<3.14*x*x:cout<<"Invalid Entry"):cout<<"The circumference is "<<2*3.14*x;
getch();
}
