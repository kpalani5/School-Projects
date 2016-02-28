#include <iostream.h>
#include <conio.h>
class a
{
int x;
public:
int y;
};

class b:virtual public a
{
int z;
public:
int w;
};


class c:virtual public a
{
int m;
public:
int n;
};

class d:public b,public c
{
int p;
public:
int q;
};

void main()
{
clrscr();
d d1;
cout<<sizeof(d1);
getch();
}