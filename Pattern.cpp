#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int n,i,j;
cout<<"Enter limit of Letters: ";
cin>>n;
cout<<endl;
if (n<1||n>26)
{
cout<<"Invalid";
}
else
{
cout<<"HORIZONTAL:\n\n"<<endl;
cout<<" ";
for (i = 0; i < n; i++)
{
cout<<"*";
}
cout<<endl;
cout<<" ";
for (i = 65; i < 65+n; i++)
{
cout<<(char)i;
}
cout<<endl;
cout<<" ";
for (i = 0; i < n; i++)
{
cout<<"*";
}
cout<<endl;
cout<<endl;
cout<<"VERTICAL:\n\n"<<endl;
for (i = 65; i < 65+n; i++)
{
for (j = 1; j <= (n/2)-3; j++)
{
cout<<" ";
}
cout<<"* ";
cout<<(char)i;
cout<<" *"<<endl;
}
cout<<endl;
cout<<endl;
cout<<"RIGHT DIAGONAL:\n\n"<<endl;
int space=n-1;
for (i = 65; i < 65+n; i++)
{
for (j = space; j >= 0; j--)
{
cout<<" ";
}
cout<<"* "<<(char)i<<" *"<<endl;
space--;
}
cout<<endl;
cout<<endl;
cout<<"LEFT DIAGONAL:\n\n"<<endl;
space=1;
for (i = 65; i < 65+n; i++)
{
for (j = 0; j < space; j++)
{
cout<<" ";
}
cout<<"* "<<(char)i<<" *"<<endl;
space++;
}
}
getch();
}
