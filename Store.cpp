#include <iostream.h>
#include <conio.h>
#include <karthik.h>
void read(int A[][10],int m,int n)
{
int i,j;
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
cout<<"Enter value "<<j+1<<" for row "<<i+1<<": ";
cin>>A[i][j];
}
cout<<endl;
}
cout<<endl;
}
void display(int A[],int size)
{
int i;
for (i = 0; i < size; i++)
{
cout<<A[i]<<"\t";
}
}
void array(int A[][10],int B[][10],int m,int n,int sum[],int &x)
{
x=0;
int i,j,k,add[50],y=0;
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
add[y]=A[i][j]+B[i][j];
if (y>0)
{
for (k = 0; k < y; k++)
{
if (add[y]==add[k])
{
add[y]=1;
}
}
}
if (add[y]%5==0)
{
sum[x]=add[y];
x++;
}
y++;
}
}
}
void main()
{
clrscr();
int A[10][10],B[10][10],sum[50],i,j,m,n,x;
cout<<"Enter size of row: ";
cin>>m;
cout<<"Enter size of column: ";
cin>>n;
cout<<"\nArray 1:\n";
read(A,m,n);
cout<<"\nArray 2:\n";
read(B,m,n);
array(A,B,m,n,sum,x);
sort(sum,x);
display(sum,x);
getch();
}
