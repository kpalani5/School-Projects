#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
void main()
{
clrscr();
char name[100][100],S[100],a[3];
int n,i,j;
cout<<"Enter number of names to be entered: ";
cin>>n;
gets(a);
cout<<endl;
for (i = 0; i < n; i++)
{
cout<<"Enter name "<<i+1<<": ";
gets(name[i]);
cout<<endl;
}  
for (i = 0; i < n; i++)
{
for (j = i+1; j < n; j++)
{
if (strcmpi(name[i],name[j])>0)
{
strcpy(S,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],S);
} 
}
}
cout<<"The alphabetical order is: \n"<<endl;
for (i = 0; i < n; i++)
{
cout<<"Roll number "<<i+1<<": ";
puts(name[i]);
cout<<endl;
}
getch();
}
