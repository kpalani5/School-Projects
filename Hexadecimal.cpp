#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
char num[100];
float n,dec;
int hex,i,ct=0,dgt,x;
cout<<"Enter decimal number: ";
cin>>n;
hex=n;
for (i = hex; i != 0; i=i/16)
{
ct++;
}
x=ct-1;
for (i = hex; i != 0; i=i/16)
{
dgt=i%16;
if (dgt>=0&&dgt<=9)
{
num[x]=dgt+48;
x--;
}
else
{
switch(dgt)
{
case 10:num[x]='A';break;
case 11:num[x]='B';break;
case 12:num[x]='C';break;
case 13:num[x]='D';break;
case 14:num[x]='E';break;
case 15:num[x]='F';break;
}
x--;
}
}
num[ct]='.';
dec=n-hex;
ct++;
do
{
dec=(dec-floor(dec))*16;
dgt=floor(dec);
if (dgt>=0&&dgt<=9)
{
num[ct]=dgt+48;
ct++;
}
else
{
switch(dgt)
{
case 10:num[ct]='A';break;
case 11:num[ct]='B';break;
case 12:num[ct]='C';break;
case 13:num[ct]='D';break;
case 14:num[ct]='E';break;
case 15:num[ct]='F';break;
}
ct++;
}
}while(dgt!=0);
num[ct]='\0';
cout<<"The hexadecimal number is ";
cout<<num;
getch();
}
