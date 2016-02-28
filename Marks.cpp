#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
double A[30],B[30],max1,max2,std1,std2;
int n,i,flag;
cout<<"Enter number of students: ";
cin>>n;
cout<<"\n";
cout<<"Enter roll number of student 1: ";
cin>>A[0];
cout<<"Enter mark of student 1: ";
cin>>B[0];
cout<<"\n";
max1=B[0];
max2=B[0];
std1=A[0];
std2=A[0];
for (i = 1; i < n; i++)
{
cout<<"Enter roll number of student "<<i+1<<": ";
cin>>A[i];
cout<<"Enter marks of student "<<i+1<<": ";
cin>>B[i];
cout<<"\n";
}
for (i = 1; i < n; i++)
{
if (B[i]>max1)
{
max1=B[i];
std1=A[i];
flag=i;
}
}
for (i = 1; i < n; i++)
{
if (B[i]>max2&&i!=flag)
{
max2=B[i];
std2=A[i];
}
}
cout<<"The highest mark is "<<max1<<" received by roll number "<<std1<<"."<<endl;
cout<<"The second highest mark is "<<max2<<" received by roll number "<<std2<<"."<<endl;
getch();
}
