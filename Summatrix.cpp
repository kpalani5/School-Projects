#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[10][10],r[10],c[10],i,j,m,n;
for (i = 0; i < 10; i++)
{
r[i]=0;
c[i]=0;
}
cout<<"Enter number of rows: ";
cin>>m;
cout<<"Enter number of columns: ";
cin>>n;
cout<<endl;
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
cout<<"Enter value "<<j+1<<" for row "<<i+1<<": ";
cin>>A[i][j];
}
cout<<endl;
}
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
r[i]=r[i]+A[i][j];
}
}
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
{
c[i]=c[i]+A[j][i];
}
}
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
cout<<A[i][j]<<"\t";
}
cout<<"||\t"<<r[i];
cout<<endl;
}
cout<<endl;
for (i = 0; i < m*5; i++) 
{
cout<<"--";
}
cout<<endl;
for (i = 0; i < m*5; i++) 
{
cout<<"--";
}
cout<<"\n"<<endl;
for (i = 0; i < n; i++)
{
cout<<c[i]<<"\t";
}
getch();
}
