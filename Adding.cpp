#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <process.h>
#include <math.h>
void add(char A[],char B[])
{
strcat(A,B);
puts(A);
}
void add(char a,char b)
{
char A[8];
A[0]=a;
A[1]='+';
A[2]=b;
A[3]='=';
A[4]=a;
A[5]='?';
A[6]=b;
A[7]='\0';
puts(A);
}
void add(int a,int b)
{
cout<<a+b;
}
void main()
{
clrscr();
char X[11],U[5];
cout<<"Enter any key to start: ";
do
{
gets(U);
cout<<endl;
char A[101],B[101];
int f1=0,f2=0;
int i;
cout<<"Enter value 1: ";
gets(A);
cout<<"Enter value 2: ";
gets(B);
for (i = 1; i < strlen(A); i++)
{
if (isdigit(A[i])==0)
{
f1=1;
break;
}
}
for (i = 1; i < strlen(B); i++)
{
if (isdigit(B[i])==0)
{
f2=1;
break;
}
}
if (A[0]!='-'&&isdigit(A[0])==0)
{
f1=1;
}
if (B[0]!='-'&&isdigit(B[0])==0)
{
f2=1;
}
if (strlen(A)==1&&A[0]=='-'||strlen(B)==1&&B[0]=='-')
{
f1=1;
}
if (f1==1||f2==1)
{
if (strlen(A)==1&&strlen(B)==1)
{
char a=A[0];
char b=B[0];
add(a,b);
}
else
add(A,B);
}
int m,n;
if (f1!=1&&f2!=1)
{
m=0;
n=0;
for (i = strlen(A)-1; i >= 1; i--)
{
m=m+((A[i]-48)*pow(10,strlen(A)-1-i));
}
for (i = strlen(B)-1; i >= 1; i--) 
{
n=n+((B[i]-48)*pow(10,strlen(B)-1-i));	
}
if (A[0]=='-')
{
m=-m;
}
else
{
m=m+((A[0]-48)*pow(10,strlen(A)-1));
}
if (B[0]=='-')
{
n=-n;    
}
else
{
n=n+((B[0]-48)*pow(10,strlen(B)-1));
}
add(m,n);
}
cout<<"\n"<<endl;
cout<<"Enter 'e' to exit or any other key to continue: ";
cin>>X;
}while (strcmpi(X,"e")!=0);
exit(0);
getch();
}
