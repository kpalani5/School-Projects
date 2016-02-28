#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char word[100][100];
int i,j,n,flag=0;
cout<<"Enter number of words: ";
cin>>n;
for (i = 0; i < n; i++)
{
cout<<"Enter word "<<i+1<<": ";
cin>>word[i];
}
for (i = 0; i < n-1; i++)
{
j=strlen(word[i])-1;
if (word[i][j]!=word[i+1][0])
{
flag=1;
break;
}
}
cout<<endl;
if (flag==0)
{
cout<<"This is a word chain.";
}
else
cout<<"Not a word chain.";
getch();
}
