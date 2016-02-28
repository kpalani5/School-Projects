#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
int i,j;
char A[26];
cout<<"                          MAGIC SQUARE\n"<<endl;
do
{
cout<<endl;
int sq[6][6],sum=0,ct=0,row[6]={0,0,0,0,0,0},col[6]={0,0,0,0,0,0},dia[2]={0,0},flag=0;
cout<<"           |(1,1)|(1,2)|(1,3)|(1,4)|(1,5)|(1,6)|"<<endl;
cout<<"           ------------------------------------"<<endl;
cout<<"           |(2,1)|(2,2)|(2,3)|(2,4)|(2,5)|(2,6)|"<<endl;
cout<<"           ------------------------------------"<<endl;
cout<<"           |(3,1)|(3,2)|(3,3)|(3,4)|(3,5)|(3,6)|"<<endl;
cout<<"           ------------------------------------"<<endl;
cout<<"           |(4,1)|(4,2)|(4,3)|(4,4)|(4,5)|(4,6)|"<<endl;
cout<<"           ------------------------------------"<<endl;
cout<<"           |(5,1)|(5,2)|(5,3)|(5,4)|(5,5)|(5,6)|"<<endl;
cout<<"           ------------------------------------"<<endl;
cout<<"           |(6,1)|(6,2)|(6,3)|(6,4)|(6,5)|(6,6)|"<<endl;
cout<<"\n"<<endl;
cout<<"Enter numbers from 1 to 36 so that they form a magic square.\n"<<endl;
for (i = 0; i < 6; i++)
{
for (j = 0; j < 6; j++)
{
cout<<"Enter value for ("<<i+1<<","<<j+1<<") : ";
cin>>sq[i][j];
}
cout<<endl;
}
for (i = 0; i < 6; i++)
{
for (j = 0; j < 6; j++)
{
if (sq[i][j]<1||sq[i][j]>36)
{
ct++;
}
else
{
sum=sum+sq[i][j];
}
}
}
if (ct>0)
{
cout<<"There are "<<ct<<" invalid entries!"<<endl;
}        //Checking whether only 1-16 are entered
if (sum!=666)
{
ct++;
cout<<"Total Entry is Invalid!"<<endl;
}    //Checking whether 1-16 are entered only once each
for (i = 0; i < 6; i++)
{
for (j = 0; j < 6; j++)
{
row[i]=row[i]+sq[i][j];
}
}
if (row[0]==row[1]&&row[0]==row[2]&&row[0]==row[3]&&row[0]==row[4]&&row[0]==row[5])
{
cout<<"";
}
else
{
flag=1;
}   //Checking for Rows
for (j = 0; j < 6; j++)
{
for (i = 0; i < 6; i++)
{
col[j]=col[j]+sq[i][j];
}
}
if (col[0]==col[1]&&col[0]==col[2]&&col[0]==col[3]&&col[0]==col[4]&&col[0]==col[5])
{
cout<<"";
}
else
{
flag=1;
}   //Checking for Columns
if (row[0]!=col[0]) 
{
flag=1;
}     //Checking for rows and columns
for (i = 0; i < 6; i++) 
{
dia[0]=dia[0]+sq[i][i];
}     //Checking for main diagonal
for (i = 0,j=5; i < 6; i++,j--)
{
dia[1]=dia[1]+sq[i][j];
}     //Checking for other diagonal
if (dia[0]==dia[1]&&dia[0]==row[0]&&dia[0]==col[0]) 
{
cout<<"";    
}
else
{
flag=1;
}     //Checking the magic square
if (flag==0&&ct==0) 
{
cout<<"YOU HAVE WON! ";
strcpy(A,"k is great");
}
else
{
cout<<"Better luck next time."<<endl;
cout<<"Enter yes to try again. Enter any other key to exit: ";
cin>>A;
}
cout<<"\n"<<endl;
}while (strcmpi(A,"yes")==0);
if (strcmpi(A,"k is great")!=0)
{
cout<<"The answer to this magic square is: \n"<<endl;
int ans[6][6]={6,32,3,34,35,1,7,11,27,28,8,30,24,14,16,15,23,19,13,20,22,21,17,18,25,29,10,9,26,12,36,5,33,4,2,31};
for (i = 0; i < 6; i++)
{
for (j = 0; j < 6; j++)
{
cout<<ans[i][j]<<"\t";
}
cout<<endl;
}     
}
getch();
}
