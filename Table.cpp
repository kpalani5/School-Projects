#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[100][100];
int r,c;
cout<<"Enter number of rows(<=100): ";
cin>>r;
cout<<"Enter number of columns(<=10): ";
cin>>c;
for (int i = 0; i < r; i++)
{
for (int j = 0; j < c; j++)
{
A[i][j]=(i+1)*(j+1);
cout<<A[i][j]<<"\t";
}
cout<<"\n";
}
getch();
}
