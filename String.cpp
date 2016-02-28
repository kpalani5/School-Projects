#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
void str(char A[],char B[])
{
char S[101],temp[101];
unsigned int i,j,flag=0,pos;
for (i = 0; i < strlen(A); i++)
{
if (flag==0) 
{	
int x=0;
for (j = i; j < strlen(B)+i; j++)
{
temp[x]=A[j];
x++;
}
temp[x]='\0';
if (strcmpi(temp,B)==0)
{
flag=1;
pos=i;
}
}
}
int y=0;
for (i = 0; i < strlen(A); i++) 
{
if (i<pos||i>strlen(B)+pos-1) 
{
S[y]=A[i];
y++;
}
}
S[y]='\0';
cout<<S;
}
void main()
{
clrscr();
char A[101],B[101];
cout<<"Enter a string: ";
gets(A);
cout<<endl<<"Enter another string: ";
gets(B);
cout<<endl;
str(A,B);
getch();
}
