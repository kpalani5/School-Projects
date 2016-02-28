#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
long d,m,y;
int ch;
do
{
a:
{
cout<<"Enter Date: ";
cin>>d;
cout<<"Enter Month: ";
cin>>m;
cout<<"Enter Year: ";
cin>>y;
}
if (y<=999||y>=10000)
{
cout<<"Enter only four digit numbers\n"<<endl;
goto a;
}
else
{
switch (m)
{
case 1:
{
if (d>31||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st January "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd January "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd January "<<y;
}
else
cout<<d<<"th January "<<y;
}
}
break;
case 2:
{
if (y%4!=0)
{
if (d>28||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st February "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd February "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd February "<<y;
}
else
cout<<d<<"th February "<<y;
}
}
else
{
if (d>29||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st February "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd February "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd February "<<y;
}
else
cout<<d<<"th February "<<y;
}
}
}
break;
case 3:
{
if (d>31||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st March "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd March "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd March "<<y;
}
else
cout<<d<<"th March "<<y;
}
}
break;
case 4:
{
if (d>30||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st April "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd April "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd April "<<y;
}
else
cout<<d<<"th April "<<y;
}
}
break;
case 5:
{
if (d>31||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st May "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd May "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd May "<<y;
}
else
cout<<d<<"th May "<<y;
}
}
break;
case 6:
{
if (d>30||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st June "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd June "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd June "<<y;
}
else
cout<<d<<"th June "<<y;
}
}
break;
case 7:
{
if (d>31||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st July "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd July "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd July "<<y;
}
else
cout<<d<<"th July "<<y;
}
}
break;
case 8:
{
if (d>31||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st August "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd August "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd August "<<y;
}
else
cout<<d<<"th August "<<y;
}
}
break;
case 9:
{
if (d>30||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st September "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd September "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd September "<<y;
}
else
cout<<d<<"th September "<<y;
}
}
break;
case 10:
{
if (d>31||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st October "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd October "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd October "<<y;
}
else
cout<<d<<"th October "<<y;
}
}
break;
case 11:
{
if (d>30||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st November "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd November "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd November "<<y;
}
else
cout<<d<<"th November "<<y;
}
}
break;
case 12:
{
if (d>31||d<1)
{
cout<<"Invalid Date\n"<<endl;
goto a;
}
else
{
if (d==1||d==21||d==31)
{
cout<<d<<"st December "<<y;
}
else
if (d==2||d==22)
{
cout<<d<<"nd December "<<y;
}
else
if (d==3||d==23)
{
cout<<d<<"rd December "<<y;
}
else
cout<<d<<"th December "<<y;
}
}
break;
default:
{
cout<<"Invalid Month\n"<<endl;
goto a;
}
}
}
cout<<"\n";
cout<<"Enter 0 to continue: ";
cin>>ch;
cout<<"\n";
}
while (ch==0);
getch();
}
