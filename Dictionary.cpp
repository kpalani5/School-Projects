#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char word1[50],word2[50];
unsigned int i;
cout<<"Enter a word: ";
cin>>word1;
cout<<"Enter another word: ";
cin>>word2;
cout<<endl;
if (strlen(word1)>strlen(word2))
{
for (i = 0; i < strlen(word1); )
{
if (word1[i]>word2[i])
{
cout<<"The dictionary order is: \n";
cout<<word2<<"\n"<<word1;
break;
}
else
if (word1[i]<word2[i])
{
cout<<"The dictionary order is: \n";
cout<<word1<<"\n"<<word2;
break;
}
else
if (word1[i]==word2[i])
{
i++;
}
}
}
if (strlen(word1)<strlen(word2))
{
for (i = 0; i < strlen(word2); )
{
if (word1[i]>word2[i])
{
cout<<"The dictionary order is: \n";
cout<<word2<<"\n"<<word1;
break;
}
else
if (word1[i]<word2[i])
{
cout<<"The dictionary order is: \n";
cout<<word1<<"\n"<<word2;
break;
}
else
if (word1[i]==word2[i])
{
i++;
}
}
}
if (strlen(word1)==strlen(word2))
{
for (i = 0; i < strlen(word1); )
{
if (word1[i]>word2[i])
{
cout<<"The dictionary order is: \n";
cout<<word2<<"\n"<<word1;
break;
}
else
if (word1[i]<word2[i])
{
cout<<"The dictionary order is: \n";
cout<<word1<<"\n"<<word2;
break;
}
else
if (word1[i]==word2[i])
{
i++;
}
}
}
if (i==strlen(word1)&&i==strlen(word2))
{
cout<<"Identical words.";
}
getch();
}
