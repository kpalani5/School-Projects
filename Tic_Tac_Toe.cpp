#include <iostream.h>
#include <conio.h>
#include <process.h>
char A[3][3];
char check();
void matrix1();
void matrix2();
void player();
void comp();
void main()
{ 
clrscr();
char sp=' ';
cout<<"                               TIC - TAC - TOE\n"<<endl;
matrix1();
cout<<endl;
do
{
matrix2();
cout<<endl;
player();
cout<<endl;
sp=check();
if (sp!=' ')
{
break;
}
cout<<endl;
comp();
sp=check();
}while(sp==' ');
if (sp=='X'||sp=='x')
{
cout<<"Winner! \n";
}
else
cout<<"You Lost! \n";
cout<<endl;
matrix2();
getch();
}
void matrix1()
{
int i,j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
A[i][j]=' ';
}
}
}
void player()
{
int i,j;
cout<<"Enter row number of your move: ";
cin>>i;
cout<<"Enter column number of your move: ";
cin>>j;
i--;
j--;
if (A[i][j]!=' ')
{
cout<<"Invalid move!! \n";
player();
}
else
A[i][j]='X';
}
void comp()
{
int i,j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (A[i][j]==' ')
{
break;
}
}
if (A[i][j]==' ')
{
break;
}
}
if (i*j==9)
{
cout<<"Draw! \n";
exit(0);
}
else
A[i][j]='O';
}
void matrix2()
{
int i;
for (i = 0; i < 3; i++)
{
cout<<A[i][0]<<"   "<<A[i][1]<<"   "<<A[i][2]<<"\t";
if (i!=2)
{
cout<<"\n---|---|---\n";
}
}
cout<<endl;
}
char check()
{
int i;
for (i = 0; i < 3; i++)
{
if (A[i][0]==A[i][1]&&A[i][0]==A[i][2])
{
return A[i][0];
}
}
for (i = 0; i < 3; i++)
{
if (A[0][i]==A[1][i]&&A[2][i]==A[0][i])
{
return A[0][i];    
}
}
if (A[0][0]==A[1][1]&&A[2][2]==A[0][0])
{
return A[0][0];
}
if (A[0][2]==A[1][1]&&A[2][0]==A[0][2])
{
return A[0][2];    
}
return ' ';
}
