#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int i;
cout<<"                                 TRIGONOMETRY"<<endl;
cout<<" "<<endl;
cout<<"SINE(sin) - 1"<<endl;
cout<<" "<<endl;
cout<<"COSINE(cos) - 2"<<endl;
cout<<" "<<endl;
cout<<"TANGENT(tan) - 3"<<endl;
cout<<" "<<endl;
cout<<"COSECANT(cosec) - 4"<<endl;
cout<<" "<<endl;
cout<<"SECANT(sec) - 5"<<endl;
cout<<" "<<endl;
cout<<"COTANGENT(cot) - 6"<<endl;
cout<<" "<<endl;
cout<<"Choose the numbers next to the trigonometric identities and find their origins."<<endl;
cout<<" "<<endl;
cout<<"Type a number from 1 - 6 : ";
cin>>i;
cout<<" "<<endl;
switch(i)
{
case 1:cout<<"Sine=Opposite side/Hypotenuse";break;
case 2:cout<<"Cosine=Adjacent side/Hypotenuse";break;
case 3:cout<<"Tangent=Opposite side/Adjacent side";break;
case 4:cout<<"Cosecant=Hypotenuse/Opposite side";break;
case 5:cout<<"Secant=Hypotenuse/Adjacent side";break;
case 6:cout<<"Cotangent=Adjacent side/Opposite side";break;
default:cout<<"Choose numbers only from 1 to 6";
}
getch();
}
