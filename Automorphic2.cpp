#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
int a,sq,flag=0,i,j,k,l,m,n,o,p,dgt1,dgt2,ct1=0,ct2=0;
cout<<"Enter a Number: ";
cin>>a;
sq=a*a;
for (i = a; i != 0; i=i/10)
{
dgt1=i%10;
ct1++;
}
for (j = sq; j != 0; j=j/10)
{
dgt2=j%10;
ct2++;
}
for (k = a; k != 0; k=k/10)
{
dgt1=k%10;
break;
}
for (l = sq; l != 0; l=l/10)
{
dgt2=l%10;
break;
}
if (dgt1==dgt2)
{
flag=1;
}        
else
flag=0;
for (m = a/10; m != 0; m=m/10)
{
if (a!=0)
{
dgt1=m%10;
break;    
}
else
{
flag=1;
}
break;
}
for (n = sq/10; l != 0; l=l/10)
{
if (a!=0)
{
dgt1=n%10;
break;    
}
else
{
dgt1==dgt2;
}
break;
}
if (dgt1==dgt2)
{
flag=1;
}
else
flag=0;
for (o = a/100; o != 0; o=o/10)
{
if (a!=0)
{
dgt1=o%10;
break;
}
else
{
flag=1;
}
break;
}
for (p = sq/100; p != 0; p=p/10)
{
if (a!=0)
{
dgt1=p%10;
break;    
}
else
{
dgt1==dgt2;
}
break;
}
if (dgt1==dgt2)
{
flag=1;
}
else
flag=0;
if (flag==1)
{
cout<<a<<" is an Automorphic number.";    
}
else
cout<<a<<" is not automorphic.";
getch();
} 
