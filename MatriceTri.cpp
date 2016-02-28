#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[100][100],i,j,n;
cout<<"Enter dimension of matrix: ";
cin>>n;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
cout<<"Enter value "<<j+1<<" for row "<<i+1<<": ";
cin>>A[i][j];
}
cout<<endl;
}
cout<<"\n";
cout<<"The matrix is : \n"<<endl;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
cout<<A[i][j]<<" ";
}
cout<<endl;
}
cout<<"\n";
cout<<"The lower left triangle is : \n"<<endl;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i>=j)
{
cout<<A[i][j]<<" ";
}
else
cout<<"  ";
}
cout<<endl;
}
cout<<"\n";
cout<<"The upper right triangle is : \n"<<endl;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i<=j)
{
cout<<A[i][j]<<" ";
}
else
cout<<"  ";
}
cout<<endl;
}
cout<<"\n";
cout<<"The lower right triangle is : \n"<<endl;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i+j>=n-1)
{
cout<<A[i][j]<<" ";
}
else
cout<<"  ";
}
cout<<endl;
}
cout<<"\n";
cout<<"The upper left triangle is : \n"<<endl;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i+j<=n-1)
{
cout<<A[i][j]<<" ";
}
else
cout<<"  ";
}
cout<<endl;
}
getch();
}
