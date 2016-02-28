#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
void main()
{
clrscr();
int i,j;
char S[100];
cout<<"Enter a sentence: ";
gets(S);
for (i = strlen(S)-1; i >=0 ; i--)
{
if (S[i]==' ') 
{
for (j = i+1; S[j] != ' '&& S[j] != '\0'; j++)
{
cout<<S[j];
}
cout<<' ';
}
if (i==0)
{
for (j = 0; S[j] != ' ' && S[j]!='\0'; j++)
{
cout<<S[j];
}
}
}
getch();
}
