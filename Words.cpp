#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
clrscr();
char S[100];
unsigned int ct=1,flag=0,i;
cout<<"Enter a sentence: ";
gets(S);
i=0;
while (S[i]==' ')
{
i++;
}
if (i==strlen(S))
{
ct=0;
}
else
{
do
{
if (S[i]==' ')
{
flag=1;
}
if (S[i]!=' ' && flag==1 && isalnum(S[i])!=0)
{
ct++;
flag=0;
}
i++;
}while(S[i]!='\0');
}
cout<<"The number of words is "<<ct<<".";
getch();
}
