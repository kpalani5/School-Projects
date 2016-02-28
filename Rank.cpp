#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main()
{
clrscr();
char A[101],temp;
cout<<"Enter a word: ";
cin>>A;
int i,j,l=strlen(A);
for (i = 0; i < l; i++)
{
for (j = 0; j < l; j++)
{
if (j!=i)
{
if (A[i]<A[j])
{
temp=A[i];
A[i]=A[j];
A[j]=temp;
}
}
}
}
cout<<"The first rank of this word is "<<A<<"."<<endl;
for (i = 0; i < l; i++)
{
for (j = 0; j < l; j++)
{
if (j!=i)
{
if (A[i]>A[j])
{
temp=A[i];
A[i]=A[j];
A[j]=temp;
}
}
}
}
cout<<"The last rank of this word is "<<A<<"."<<endl;
getch();
}
