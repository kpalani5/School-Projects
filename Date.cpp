#include <iostream.h>
#include <conio.h>
#include <math.h>
void get_date(int &d,int &m,int &y)
{
cout<<"Enter date : ";
cin>>d;
cout<<"Enter month : ";
cin>>m;
cout<<"Enter year : ";
cin>>y;
cout<<endl;
}
int valid(int date,int month,int year)
{
if (date<1||date>31)
{
return 1;
}
else
if ((month==4||month==6||month==9||month==11)&&date>30)
{
return 1;
}
else
if (month==2&&year%4!=0&&date>28)
{
return 1;
}
else
if (month==2&&year%4==0&&date>29)
{
return 1;
}
else
if (month<1||month>12)
{
return 1;
}
else
if (year<0)
{
return 1;
}
else
{
return 0;
}
}
long int difference(int d,int m,int y,int d0,int m0,int y0)
{
long int diff;
int date,month,tmp;
long int year=abs(y0-y);
year=year*365;
if (y>y0)
{
tmp=y;
y=y0;
y0=tmp;
tmp=m;
m=m0;
m0=tmp;
tmp=d;
d=d0;
d0=tmp;
}
for (int i = y+1; i < y0; i++)
{
if (i%4==0)
{
year=year+1;
}
}
if (m>m0)
{
month=0;
for (int j = m0; j < m; j++)
{
if (j==1||j==3||j==5||j==7||j==8||j==10||j==12)
{
month=month+31;
}
if (j==4||j==6||j==9||j==11)
{
month=month+30;
}
if (j==2&&y%4==0)
{
month=month+29;
}
if (j==2&&y%4!=0)
{
month=month+28;
}
}
month=month+d-d0;
diff=year-month;
}
if (m0>m)
{
month=0;
for (int j = m; j < m0; j++)
{
if (j==1||j==3||j==5||j==7||j==8||j==10||j==12)
{
month=month+31;
}
if (j==4||j==6||j==9||j==11)
{
month=month+30;
}
if (j==2&&y%4==0)
{
month=month+29;
}
if (j==2&&y%4!=0)
{
month=month+28;
}
}
month=month+d0-d;
diff=year+month;
}
if (m==m0) 
{
month=d-d0;
diff=year-month;
}
return diff;
}
void main()
{
clrscr();
int d1,m1,y1,d2,m2,y2;
cout<<"Enter values for first date: \n";
get_date(d1,m1,y1);
cout<<endl;
cout<<"Enter values for second date: \n";
get_date(d2,m2,y2);
if (valid(d1,m1,y1)!=0)
{
cout<<"First Date is Invalid.";
}
cout<<endl;
if (valid(d2,m2,y2)!=0)
{
cout<<"Second Date is Invalid.";
}
if (valid(d1,m1,y1)==0&&valid(d2,m2,y2)==0)
{
cout<<"The difference between two dates is "<<difference(d1,m1,y1,d2,m2,y2)<<".";
}
getch();
}
