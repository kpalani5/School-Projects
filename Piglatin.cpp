#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
void piglatin (char A[])
{
int l=strlen(A);
int i,ct=0,flag=0;
for (i = 0; i < l; i++)
{
A[i]=toupper(A[i]);
}
do 
{
if (A[0]!='A'&&A[0]!='E'&&A[0]!='I'&&A[0]!='O'&&A[0]!='U'&&ct<l)
{
flag=0;
char temp=A[0];
i=0;
do
{
A[i]=A[i+1];
i++;
}while(A[i]!='\0');
A[l-1]=temp;
A[l]='\0';
}
else
{
flag=1;
}
ct++;
}while(flag!=1);
strcat(A,"AY");
cout<<A;
}
void main()
{
clrscr();
char S[101];
cout<<"Enter a word: ";
cin>>S;
piglatin(S);
getch();
}
