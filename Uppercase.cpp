#include <iostream.h>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
void main()
{
clrscr();
char S[10000];
cout<<"Enter a sentence: ";
gets(S);
cout<<endl;
S[0]=toupper(S[0]);
for (int i = 0; S[i] != '\0'; i++)
{
if (S[i-1]==' ')
{
S[i]=toupper(S[i]);
}
}
cout<<S;
getch();
}
