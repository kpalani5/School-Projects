#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int A[10][10],B[10][10],i,m,n,j;
cout<<"Enter number of rows(<=10): ";
cin>>n;
cout<<"Enter number of columns(<=10): ";
cin>>m;
cout<<"\n"<<endl; 
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
{
cout<<"Enter value "<<j+1<<" for row "<<i+1<<": ";
cin>>A[i][j];    
}
cout<<endl;   
}
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
{
B[j][i]=A[i][j];    
}   
}
cout<<"The original matice is: \n"<<endl;
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
{
cout<<A[i][j]<<"\t";    
}   
cout<<"\n"<<endl;
}
cout<<"\n"<<endl;
cout<<"The transposed matice is: \n"<<endl;
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
cout<<B[i][j]<<"\t";    
}   
cout<<"\n"<<endl;
}
getch();
} 
