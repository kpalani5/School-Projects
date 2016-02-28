#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <ostream.h>
void main()
{
clrscr();
int choice;
float velocity,displacement,acceleration,time,volume,force,work,power,torque,current,voltage,pressure,density,charge,mass,area;
cout<<"PHYSICS CALCULATOR \n"<<endl;
cout<<"1 - Velocity"<<endl;
cout<<"2 - Acceleration"<<endl;
cout<<"3 - Displacement"<<endl;
cout<<"4 - Time"<<endl;
cout<<"5 - Force"<<endl;
cout<<"6 - Work"<<endl;
cout<<"7 - Power"<<endl;
cout<<"8 - Kinetic Energy"<<endl;
cout<<"9 - Current"<<endl;
cout<<"10 - Voltage"<<endl;
cout<<"11 - Pressure"<<endl;
cout<<"12 - Density \n"<<endl;
cout<<"CHOOSE FROM THESE OPTIONS: ";
cin>>choice;
switch(choice)
{
case 1:cout<<"Give displacement: ";
cin>>displacement;
cout<<"Give the time: ";
cin>>time;
cout<<"Velocity is "<<displacement/time;break;

case 2:cout<<"Give velocity: ";
cin>>velocity;
cout<<"Give the time: ";
cin>>time;
cout<<"Acceleration is "<<velocity/time;break;

case 3:cout<<"Give velocity: ";
cin>>velocity;
cout<<"Give the time: ";
cin>>time;
cout<<"Displacement is "<<velocity*time;break;

case 4:cout<<"Give displacement: ";
cin>>displacement;
cout<<"Give the velocity: ";
cin>>velocity;
cout<<"Time is "<<displacement/velocity;break;

case 5:cout<<"Give mass: ";
cin>>mass;
cout<<"Give the acceleration: ";
cin>>acceleration;
cout<<"Force is "<<mass*acceleration;break;

case 6:cout<<"Give displacement: ";
cin>>displacement;
cout<<"Give the force: ";
cin>>force;
cout<<"Work is "<<displacement*force;break;

case 7:cout<<"Give work: ";
cin>>work;
cout<<"Give the time: ";
cin>>time;
cout<<"Power is "<<work*time;break;

case 8:cout<<"Give velocity: ";
cin>>velocity;
cout<<"Give the mass: ";
cin>>mass;
cout<<"Kinetic Energy is "<<0.5*mass*velocity*velocity;break;

case 9:cout<<"Give charge: ";
cin>>charge;
cout<<"Give the time: ";
cin>>time;
cout<<"Current is "<<charge/time;break;

case 10:cout<<"Give charge: ";
cin>>charge;
cout<<"Give the work: ";
cin>>work;
cout<<"Voltage is "<<work/charge;break;

case 11:cout<<"Give force: ";
cin>>force;
cout<<"Give the Area: ";
cin>>area;
cout<<"Pressure is "<<force/area;break;

case 12:cout<<"Give mass: ";
cin>>mass;
cout<<"Give the volume: ";
cin>>volume;
cout<<"Density is "<<mass/volume;break;

default:cout<<"Invalid Choice";
}
getch();
}
