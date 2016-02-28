#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[100][100],m,n,i,j;
cout<<"Enter number of rows(<=10): ";
cin>>m;
cout<<"Enter number of columns(<=10): ";
cin>>n;
cout<<"\n"<<endl;
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
cout<<"Enter value "<<j+1<<" of row "<<i+1<<": ";
cin>>A[i][j]; 
}
cout<<endl;
}
cout<<"\n"<<endl;
cout<<"The matrice is : \n"<<endl;
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
cout<<A[i][j]<<"\t"; 
}
cout<<"\n"<<endl;
}
if (m==n) 
{
cout<<"The matrice is a square matrice.\n"<<endl;
cout<<"The left diagonal is: \n"<<endl;
for (i = 0; i < n; i++) 
{
cout<<A[i][i]<<"\t";
}
cout<<"\n"<<endl;
cout<<"The right diagonal is: \n"<<endl;
for (i = 0,j=n-1; i < n; i++,j--) 
{
cout<<A[i][j]<<"\t";	
}
}
else
cout<<"The matrice is not a square matrice. It does not have diagonals. ";
getch();
}
