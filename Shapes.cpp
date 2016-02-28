#include <iostream.h>
#include <conio.h>
void main()
{
int a;
clrscr();
cout<<"                               BASIC SHAPES"<<endl;
cout<<"  "<<endl;
cout<<"Enter any number from 1 to 10 and find out the basic shapes formed by the       sides."<<endl;
cout<<" "<<endl;
cout<<"Enter a number from 1 to 10 : ";
cin>>a;
cout<<" "<<endl;
switch(a)
{
case 1:cout<<"A shape cannot be formed with one side."<<endl;
       cout<<"Only a line is formed.";break;
case 2:cout<<"A shape cannot be formed with two sides."<<endl;
	   cout<<"They can form either parallel or intersecting lines.";break;
case 3:cout<<"The shape formed is a triangle.";break;
case 4:cout<<"The shape formed is a quadrilateral which is of various types.";break;
case 5:cout<<"The shape formed is a pentagon.";break;
case 6:cout<<"The shape formed is a hexagon.";break;
case 7:cout<<"The shape formed is a heptagon or septagon.";break;
case 8:cout<<"The shape formed is a octagon.";break;
case 9:cout<<"The shape formed is a nanogon.";break;
case 10:cout<<"The shape formed is a decagon.";break;
default:cout<<"Type only numbers from 1 to 10.";
}
getch();
}
