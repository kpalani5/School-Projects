#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char A[101],B[101];
unsigned int i,k;
cout<<"Enter a word: ";
cin>>A;
cout<<endl;
for (i = 0,k=strlen(A)-1; i < strlen(A) ; i++,k--)
{
B[i]=A[k];
}
B[strlen(A)]='\0';
if (strcmpi(A,B)==0)
{
cout<<A<<" is a palindrome.";
}
else
cout<<"Not a palindrome.";
getch();
}
