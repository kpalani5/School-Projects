#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
void main()
{
clrscr();
char S[101],S1[101]="",word[51],del[50];
unsigned int i,j;
cout<<"Enter a sentence: ";
gets(S);
cout<<endl;
cout<<"Enter word to be deleted: ";
cin>>del;
cout<<endl;
for (i = 0; i < strlen(S); i++)
{
j=0;
while (S[i]!=' '&&S[i]!='\0')
{
word[j++]=S[i++];
}
word[j]='\0';
if (strcmpi(del,word)!=0)
{
strcat(S1,word);
strcat(S1," ");
}
}
strcpy(S,S1);
cout<<S;
getch();
}
