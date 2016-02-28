
#include <fstream.h>
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <iomanip.h>
#include <process.h>
#include <graphics.h>

char A[50]="Products.dat";
char AX[50]="User.dat";

struct product
{
public:
	char code[30];
	char name[30];
	double price;
	int type;
	double qty;
	int oftype;
	double offer;
};

struct user
{
char name[50];
char passw[50];
};

int check(char s[])
{
fstream f0;
f0.open(A,ios::binary|ios::in);
f0.seekg(0,ios::beg);
product s0;
int flag=0;
if(!f0.eof())
{
f0.read((char*)&s0,sizeof(s0));
}
while(!f0.eof())
{
	if(strcmp(s,s0.code)==0)
	{
		flag=1;
		break;
	}
	f0.read((char*)&s0,sizeof(s0));
}
f0.close();
return flag;
}

int checking(char s[])
{
fstream g0;
g0.open(AX,ios::binary|ios::in);
g0.seekg(0,ios::beg);
user s0;
int flag=0;
if(!g0.eof())
{
g0.read((char*)&s0,sizeof(s0));
}
else
return flag;
while(!g0.eof())
{
	if(strcmp(s,s0.name)==0)
	{
		flag=1;
		break;
	}
	g0.read((char*)&s0,sizeof(s0));
}
g0.close();
return flag;
}

void input(product &s)
{
do
{
	cout<<"Enter product code: ";
	gets(s.code);
	cout<<endl;
	if(check(s.code)==1)
{
	cout<<"Code already exists."<<endl;
	cout<<"Enter product information again."<<endl;
	cout<<endl;
}
}while(check(s.code)==1);
	cout<<"Enter product name: ";
	gets(s.name);
	cout<<endl;
do
{
	cout<<"PRODUCT TYPE\n1.MEASURED BY NUMBER OF PIECES\n2.MEASURED BY WEIGHT\n3.MEASURED BY VOLUME\n";
	cout<<"Enter an option from 1 to 3: ";
	cin>>s.type;
	cout<<endl;
	if(s.type<1||s.type>3)
	{
		cout<<"Invalid option chosen. Please choose again.\n"<<endl;
		cout<<endl;
	}
}while(s.type<1||s.type>3);
do
{
if(s.type==1)
{
	cout<<"Enter price of one quantity of product: ";
	cin>>s.price;
	cout<<endl;
}
else if(s.type==2)
{
		cout<<"Enter price of 1 kilogram of product: ";
		cin>>s.price;
		cout<<endl;
}
else if(s.type==3)
{
	       cout<<"Enter price of 1 litre of product: ";
	       cin>>s.price;
	       cout<<endl;
}
		if(s.price<0)
	{
		cout<<"Invalid price.Please enter price again.\n"<<endl;
		cout<<endl;
	}
}while(s.price<0);
do
{
	if(s.type==1)
	{
do
{
	cout<<"Enter quantity of product purchased: ";
	cin>>s.qty;
	if(floor(s.qty)!=s.qty)
	{
		cout<<"You can only enter a Whole Number as a quantity for this product."<<endl;
		cout<<"Enter quantity again."<<endl;
		cout<<endl;
	}
}while(floor(s.qty)!=s.qty);
}
if(s.type==2)
	{
		cout<<"Enter number of kilograms of product purchased: ";
		cin>>s.qty;
	}
	if(s.type==3)
	{
	       cout<<"Enter number of litres of product purchased: ";
	       cin>>s.qty;
	}
	if(s.qty<0)
	{
		cout<<"Invalid quantity.Please enter quantity again."<<endl;
		cout<<endl;
	}
}while(s.qty<0);
cout<<endl;
do
{
	cout<<"OFFER TYPE\n1.DISCOUNT\n2.NONE\n";
	cout<<"Enter an option from 1 to 2: ";
	cin>>s.oftype;
	cout<<endl;
	if(s.oftype<1||s.oftype>2)
	{
		cout<<"Invalid option chosen. Please choose again.\n"<<endl;
		cout<<endl;
	}
}while(s.oftype<1||s.oftype>2);
if(s.oftype==1)
{
do
{
cout<<"Enter discount percentage: ";
cin>>s.offer;
if(s.offer==0)
{
s.oftype=2;
}
if(s.offer<0||s.offer>100)
{
cout<<"Invalid discount percentage."<<endl;
}
}while(s.offer<0||s.offer>100);
}
else
{
s.offer=0;
}
}

void insert()
{
fstream f1;
f1.open(A,ios::binary|ios::app);
product s1;
input(s1);
f1.write((char*)&s1,sizeof(s1));
f1.close();
}

void disp_info(product s)
{
cout<<"PRODUCT INFORMATION"<<endl;
cout<<"PRODUCT CODE: "<<s.code<<endl;
cout<<"PRODUCT NAME: "<<s.name<<endl;
if(s.type==1)
{
	cout<<"PRICE OF ONE QUANTITY: "<<s.price<<endl;
	cout<<"STOCK AVAILABLE: "<<s.qty<<" pieces."<<endl;
	if(s.oftype==1)
	{
	cout<<"DISCOUNT: "<<s.offer<<"%"<<endl;
	}
	else
	{
	cout<<"NO SPECIAL OFFER"<<endl;
	}
}
else if(s.type==2)
{
    cout<<"PRICE OF ONE KILOGRAM: "<<s.price<<endl;
    cout<<"STOCK AVAILABLE: "<<s.qty<<" kilograms."<<endl;
	if(s.oftype==1)
	{
	cout<<"DISCOUNT: "<<s.offer<<"%"<<endl;
	}
	else
	{
        cout<<"NO SPECIAL OFFER"<<endl;
	}
}
else if(s.type==3)
{
	cout<<"PRICE OF ONE LITRE: "<<s.price<<endl;
	cout<<"STOCK AVAILABLE: "<<s.qty<<" litres."<<endl;
	if(s.oftype==1)
	{
	cout<<"DISCOUNT: "<<s.offer<<"%"<<endl;
	}
	else
	{
	cout<<"NO SPECIAL OFFER"<<endl;
	}
}
}

void disp_list()
{
	fstream f2;
	f2.open(A,ios::in|ios::binary);
	f2.seekg(0,ios::beg);
	product s2;
	f2.read((char*)&s2,sizeof(s2));
	while(!f2.eof())
	{
	disp_info(s2);
	cout<<"\nClick ENTER to view next product."<<endl;
	getch();
	cout<<endl;
	f2.read((char*)&s2,sizeof(s2));
	}
	f2.close();
}

void delete_code()
{
	char code1[50];
	fstream f3,ftemp;
	int flag,cont;
do
{
	cout<<"Enter code to be deleted: ";
	gets(code1);
	f3.open(A,ios::binary|ios::in);
	ftemp.open("temp.dat",ios::binary|ios::out);
	f3.seekg(0,ios::beg);
	ftemp.seekg(0,ios::beg);
	product s3;
	flag=0;
	f3.read((char*)&s3,sizeof(s3));
	while(!f3.eof())
	{
		if(strcmp(s3.code,code1)!=0)
		{
			ftemp.seekg(0,ios::end);
			ftemp.write((char*)&s3,sizeof(s3));
		}
		else
		{
			flag=1;
		}
		f3.read((char*)&s3,sizeof(s3));
	}
	if(flag==0)
	{
		cout<<"Invalid code.Please enter code again."<<endl;
		cout<<endl;
		cout<<"Enter 1 to continue deleting. Enter 0 to exit: ";
		cin>>cont;
		cout<<endl;
		if(cont!=1)
		return;
	}
	f3.close();
	ftemp.close();
}while(flag==0);
	f3.close();
	ftemp.close();
	remove(A);
	rename("temp.dat",A);
	cout<<"Product Deleted\n"<<endl;
}

void modify()
{
	char code2[50];
	fstream f4;
	int flag,cont;
do
{
	cout<<"Enter code to be modified: ";
	gets(code2);
	cout<<endl;
	int ch;
do
{
	cout<<"1.NAME\n2.PRICE\n3.QUANTITY\n4.SPECIAL OFFER\n";
	cout<<"Enter parameter to be modified: ";
	cin>>ch;
	if(ch<1||ch>4)
	{
		cout<<"Enter choice from 1 to 4 only."<<endl;
	}
}while(ch<1||ch>4);
	f4.open(A,ios::out|ios::in|ios::binary);
	f4.seekg(0,ios::beg);
	product s4;
	flag=0;
	f4.read((char*)&s4,sizeof(s4));
	while(!f4.eof())
	{
		int pos=f4.tellg();
		if(strcmp(s4.code,code2)==0)
		{       flag=1;
			if(ch==1)
			{
				cout<<"Enter modified name: ";
				char name1[50];
				gets(name1);
				strcpy(s4.name,name1);
			}
			if(ch==2)
			{
				double price1;
do
{
				cout<<"Enter modified price: ";
				cin>>price1;
				if(price1<0)
				{
					cout<<"Invalid price: "<<endl;
				}
				s4.price=price1;
}while(price1<0);
			}
			if(ch==3)
			{
				double qty1;
				int typ1;
do
{
	cout<<"PRODUCT TYPE\n1.MEASURED BY NUMBER OF PIECES\n2.MEASURED BY WEIGHT\n3.MEASURED BY VOLUME\n";
	cout<<"Enter an option from 1 to 3: ";
	cin>>typ1;
	cout<<endl;
	if(typ1<1||typ1>3)
	{
		cout<<"Invalid option chosen. Please choose again.\n"<<endl;
		cout<<endl;
	}
}while(typ1<1||typ1>3);
s4.type=typ1;
do
{
do	
{
	       cout<<"Enter modified quantity: ";
				
				cin>>qty1;
				if(qty1<0)
				{
					cout<<"Invalid quantity."<<endl;
					cout<<endl;
				}
}while(qty1<0);
				if(typ1==1)
				{
					if(floor(qty1)!=qty1)
					{
						cout<<"You can only enter a Whole Number as a quantity for this product."<<endl;
						cout<<"Enter quantity again."<<endl;
						cout<<endl;
					}
				}
				else
				break;
}while(floor(qty1)!=qty1);
				s4.qty=qty1;
			}
if(ch==4)
{
double offer1;
do
{
cout<<"Enter modified discount percentage(Enter 0 to remove special offer): ";
cin>>offer1;
if(offer1<0||offer1>100)
{
cout<<"Invalid discount amount."<<endl;
}
}while(offer1<0||offer1>100);
if(offer1==0)
{
s4.oftype=2;
s4.offer=0;
}
else
{
s4.oftype=1;
s4.offer=offer1;
}
}

			f4.seekg(pos-sizeof(s4),ios::beg);
			f4.write((char*)&s4,sizeof(s4));
		}
		f4.read((char*)&s4,sizeof(s4));

	}
	if(flag==0)
	{
		cout<<"Invalid code.Enter code again."<<endl;
		cout<<endl;
		cout<<"Enter 1 to continue modifying. Enter 0 to exit: ";
		cin>>cont;
		cout<<endl;
		if(cont!=1)
		return;
	}
	else
	break;
	f4.close();
}while(flag==0);
	f4.close();
}

void delete_all()
{
	fstream f8,fn;
	fn.open(A,ios::binary|ios::in);
	f8.open("tempn.dat",ios::binary|ios::app);
	f8.close();
	fn.close();
	remove(A);
	rename("tempn.dat",A);
}

int size()
{
int size1;
fstream f9;
f9.open(A,ios::binary|ios::in);
product s9;
if(f9.eof())
{
	size1 = 0;
}
else
{
	f9.seekg(0,ios::end);
	int pos=f9.tellg();
	size1=pos/sizeof(s9);
}
return size1;
}

int sizing()
{
int size2;
fstream g00;
g00.open(AX,ios::binary|ios::in);
user u0;
if(g00.eof())
{
	size2 = 0;
}
else
{
	g00.seekg(0,ios::end);
	int pos=g00.tellg();
	size2=pos/sizeof(u0);
}
return size2;
}

void search()
{
	char code3[50];
	fstream f5;
	int flag,cont;
do
{
	cout<<"Enter code to be searched: ";
	gets(code3);
	cout<<endl;
	f5.open(A,ios::binary|ios::in);
	f5.seekg(0);
	flag=0;
	product s5;
	f5.read((char*)&s5,sizeof(s5));
	while(!f5.eof())
	{
		if(strcmp(s5.code,code3)==0)
		{
			disp_info(s5);
			cout<<endl;
			flag=1;
			break;
		}
       f5.read((char*)&s5,sizeof(s5));
	}
	if(flag==0)
	{
		cout<<"Invalid code.Enter code again."<<endl;
		cout<<endl;
		cout<<"Enter 1 to continue searching. Enter 0 to exit: ";
		cin>>cont;
		cout<<endl;
		if(cont!=1)
		return;
	}
       f5.close();
}while(flag==0);
	f5.close();
}

void sales()
{
	product b[100];
	int n=0,flag,cont;
	cout<<setw(40)<<"SALES"<<endl;
	int ch1;
	cout<<endl;
do
{
	char code4[50];
	product x;
	fstream f6;
do
{
	cout<<"Enter product code: ";
	gets(code4);
	f6.open(A,ios::binary|ios::in);
	f6.seekg(0);
	flag=0;
	product s6;
	f6.read((char*)&s6,sizeof(s6));
	while(!f6.eof())
	{
		if(strcmp(s6.code,code4)==0)
		{
		cout<<endl;
			disp_info(s6);
			x=s6;
			cout<<endl;
			flag=1;
			break;
		}
	      f6.read((char*)&s6,sizeof(s6));
	}
	if(flag==0)
	{
		cout<<"Invalid code.Enter code again."<<endl;
		cout<<endl;
		cout<<"Enter 1 to continue sales. Enter 0 to exit: ";
		cin>>cont;
		cout<<endl;
		if(cont!=1)
		return;
	}
	f6.close();
}while(flag==0);
	f6.close();
	cout<<endl;
	double qty2;
do
{
do
{
do
{
	cout<<"Enter quantity: ";
	cin>>qty2;
	if(x.type==1)
	{
		if(floor(qty2)!=qty2)
					{
						cout<<"You can only enter a Whole Number as a quantity for this product."<<endl;
						cout<<"Enter quantity again."<<endl;
						cout<<endl;
					}
	}
	else
	break;
}while(floor(qty2)!=qty2);
	if(qty2<0)
	{
		cout<<"Invalid quantity."<<endl;
		cout<<endl;
	}
}while(qty2<0);
	if(qty2>x.qty)
	{
		cout<<"Stock not available."<<endl;
		if(x.qty==0)
		{
			cout<<"Enter quantity as 0 to continue sales."<<endl;
		}
	}
}while(qty2>x.qty);
	b[n]=x;
	b[n].price=qty2*x.price;
	b[n].price=b[n].price-(b[n].price*x.offer/100);
	b[n].qty=qty2;
	if(qty2!=0)
	{
	n++;
	}
	fstream f7;
	product s7;
	f7.open(A,ios::binary|ios::in|ios::out);
	f7.seekg(0,ios::beg);
	f7.read((char*)&s7,sizeof(s7));
	while(!f7.eof())
	{
		int pos=f7.tellg();
		if(strcmp(s7.code,x.code)==0)
		{
			s7.qty=s7.qty-qty2;
			f7.seekg(pos-sizeof(s7),ios::beg);
			f7.write((char*)&s7,sizeof(s7));
		}
		f7.read((char*)&s7,sizeof(s7));
	}
	cout<<endl;
	cout<<"1.Continue Sales\n2.Generate Bill\n";
do
{
	cout<<"Enter choice: ";
	cin>>ch1;
	cout<<endl;
	if(ch1<1||ch1>2)
	{
		cout<<"Invalid choice."<<endl;
		cout<<endl;
	}
}while(ch1<1||ch1>2);
}while(ch1==1);
n=n-1;
cout<<"GENERATING BILL.........."<<endl;
for(double time=-1000000;time<=1000000;time+=0.25)
{
cout<<"";
}
int c;
cout<<endl;
clrscr();
int ctb=0;
gotoxy(1,5);
int pgct=((n+2)/3)+1;
if(n%3==0)
{
pgct++;
}
cout<<setw(70)<<"xxxxxxxxxxxxxxxxxxXXXXXXXXXX********************XXXXXXXXXXxxxxxxxxxxxxxxxxxx\n"<<endl;
cout<<setw(40)<<"BILL\n\n"<<endl;
double total=0;
gotoxy(2,8);
cout<<"S.NO";
gotoxy(15,8);
cout<<"PRODUCT";
gotoxy(31,8);
cout<<"QUANTITY";
gotoxy(47,8);
cout<<"PRICE";
cout<<"\n\n";
c=10;
for(int i=0;i<=n;i++,c+=2)
{
	if(ctb%3==0)
	{
	c=10;
	}
	char w[20];
	if(b[i].type==1)
	{
		strcpy(w,"pieces");
	}
	if(b[i].type==2)
	{
		strcpy(w,"kilograms");
	}
	if(b[i].type==3)
	{
		strcpy(w,"litres");
	}
	if(b[i].qty!=0)
	{       ctb++;
		total=total+b[i].price;
		gotoxy(2,c);
		cout<<i+1<<".";
		gotoxy(15,c);
		cout<<b[i].name;
		gotoxy(31,c);
		cout<<b[i].qty<<" "<<w;
		gotoxy(47,c);
		cout<<"Rs."<<b[i].price<<endl;
	if((ctb%3==0)&&(i!=n))
	{
	getch();
	clrscr();
	cout<<"DISPLAYING PAGE "<<((ctb+1)/3)+1<<" OF "<<pgct;
	gotoxy(2,8);
	cout<<"S.NO";
gotoxy(15,8);
cout<<"PRODUCT";
gotoxy(31,8);
cout<<"QUANTITY";
gotoxy(47,8);
cout<<"PRICE";
cout<<"\n\n";
	}
	}
	cout<<endl;
	cout<<endl;
}       getch();
	clrscr();
	gotoxy(1,5);
	cout<<"     COST: Rs."<<total<<endl;
	cout<<endl;
	double final_cost;
	double stax=(total*10)/100;
	final_cost=total+stax;
	cout<<"     SERVICE TAX(10% of price): Rs."<<stax<<endl;
	cout<<endl;
	cout<<"     TOTAL COST: Rs."<<final_cost<<endl;
cout<<endl;
cout<<"                  THANK YOU. PLEASE VISIT AGAIN!\n\n "<<endl;
cout<<setw(70)<<"xxxxxxxxxxxxxxxxxxXXXXXXXXXX********************XXXXXXXXXXxxxxxxxxxxxxxxxxxx\n"<<endl;
}

void prod_info()
{
char v2[10];
cout<<setw(50)<<"PRODUCT INFORMATION"<<endl;
gotoxy(1,5);
cout<<"THIS APPLICATION IS USED TO STORE THE INFORMATION ABOUT DIFFERENT CONSUMER GOODSIN A SUPERMARKET.\n\n";
cout<<"THIS APPLICATION CAN BE USED TO SEARCH,MODIFY AND DELETE THE STORED INFORMATION\n\n";
cout<<"THIS ALSO PROVIDES BILLING FACILITY.\n\n";
cout<<"TO LEARN HOW TO USE THIS APPLICATION GO TO THE INSTRUCTIONS OPTION IN THE MAIN  MENU.\n\n";
cout<<"HOPE YOU WILL ENJOY USING THIS APPLICATION.\n"<<endl;
cout<<"Enter any key to continue: ";
getch();
clrscr();
}

void password(char P[])
{
int i=0;
memset(P,0,50);
P[0]=getch();
while(P[i]!=13)
{
i++;
cout<<"*";
P[i]=getch();
}
}

void main()
{
clrscr();
textcolor(12);
gotoxy(30,10);
cout<<"SALES AND BILLS\n\n"<<endl;
gotoxy(32,13);
cout<<"APPLICATION";
char pass[50],nam[50];
getch();
int mainopt;
do
{
clrscr();
cout<<setw(45)<<"WELCOME USER";
gotoxy(1,5);
cout<<"1.MASTER USER\n\n2.NORMAL USER\n\nCHOOSE USER TYPE: ";
cin>>mainopt;
if(mainopt<1||mainopt>2)
{
cout<<"\nINVALID OPTION\n\n";
cout<<"Enter any key to continue: ";
getch();
}
}while(mainopt<1||mainopt>2);
check1:
int flag=0;
char passm1[50];
if(mainopt==1)
{
	strcpy(nam,"MASTER USER");
	clrscr();
	char passc1[50];
	gotoxy(1,8);
	cout<<setw(50)<<"Enter master password: ";
	password(passc1);
	for(int i=0;i<strlen(passc1);i++)
	{
	passm1[i]=passc1[i];
	}
	passm1[i]='\0';
	for(int j=0;j<5;j++)
	{
	if(passm1[j]=='*')
	flag=1;
	else
	{
	flag=0;
	break;
	}
	}
if(flag==0)
{
goto check1;
}
strcpy(pass,passm1);
int mopt;
start:
do
{
clrscr();
cout<<setw(50)<<"WELCOME MASTER USER";
gotoxy(1,5);
cout<<"1.CREATE NEW USER\n\n2.REMOVE USER\n\n3.REMOVE ALL USERS\n\n4.VIEW USER PROFILES\n\n5.LOGIN\n\nENTER OPTION: ";
cin>>mopt;
if(mopt<1||mopt>5)
{
cout<<"Invalid choice\n\n";
cout<<"Enter any key to continue :";
getch();
}
}while(mopt<1||mopt>5);
if(mopt==1)
{
char N2[50],P2[50],PC[50];
do
{
clrscr();
cout<<setw(45)<<"NEW USER"<<endl;
gotoxy(1,5);
cout<<"Enter user name : ";
gets(N2);
if(checking(N2)==1)
{
cout<<"\nUSER NAME ALREADY EXISTS\n\n";
cout<<"Enter any key to continue: ";
getch();
}
}while(checking(N2)==1);
do
{
cout<<"\nEnter password: ";
password(P2);
cout<<endl;
cout<<endl;
cout<<"Confirm password: ";
password(PC);
cout<<endl;
if(strcmp(P2,PC)!=0)
{
cout<<"\nPASSWORDS DO NOT MATCH\n\n";
cout<<"Enter any key to continue: \n";
getch();
}
}while(strcmp(P2,PC)!=0);
fstream g2;
user u2;
strcpy(u2.name,N2);
strcpy(u2.passw,P2);
g2.open(AX,ios::binary|ios::app);
g2.write((char*)&u2,sizeof(u2));
g2.close();
goto start;
}

if(mopt==2)
{
clrscr();
char N3[50],P3[50];
int flag=0;
if(sizing()==0)
{
cout<<setw(45)<<"REMOVE USER";
gotoxy(1,5);
cout<<"NO USERS REGISTERED\n\n";
cout<<"Enter any key to continue: ";
getch();
goto start;
}
do
{
clrscr();
cout<<setw(45)<<"REMOVE USER";
gotoxy(1,5);
cout<<"Enter user name to be deleted: ";
gets(N3);
fstream g3,g4;
user u3;
g3.open(AX,ios::binary|ios::in);
g4.open("tempuser.dat",ios::binary|ios::app);
g3.seekg(0,ios::beg);
g3.read((char*)&u3,sizeof(u3));
while(!g3.eof())
{
if(strcmp(u3.name,N3)==0)
{
flag=1;
do
{
cout<<endl;
cout<<"Enter password: ";
password(P3);
if(strcmp(P3,u3.passw)!=0)
{
cout<<"\n\nInvalid password"<<endl;
}
else
break;
}while(strcmp(P3,u3.passw)!=0);
}
else
{
g4.write((char*)&u3,sizeof(u3));
}
g3.read((char*)&u3,sizeof(u3));
}
g3.close();
g4.close();
remove(AX);
rename("tempuser.dat",AX);
if(flag==0)
{
cout<<"\nUser name does not exist\n\n";
cout<<"Enter any key to continue";
getch();
goto start;
}
}while(flag==0);
cout<<"\n\nUser deleted";
getch();
goto start;
}

if(mopt==3)
{
	clrscr();
	char passc[50],passm[50];
	gotoxy(1,8);
	cout<<setw(50)<<"Enter master password: ";
	password(passc);
	for(int i=0;i<strlen(passc);i++)
	{
	passm[i]=passc[i];
	}
	passm[i]='\0';
	int flag=0;
	for(int j=0;j<5;j++)
	{
	if(passm[j]=='*')
	flag=1;
	else
	{
	flag=0;
	break;
	}

	}
	if(flag==1)
	{
	fstream go,gt;
	gt.open(AX,ios::binary|ios::in);
	go.open("tempu.dat",ios::binary|ios::app);
	go.close();
	gt.close();
	remove(AX);
	rename("tempu.dat",AX);
	clrscr();
	gotoxy(29,8);
	cout<<"ALL USERS DELETED";
	getch();
	goto start;
	}
	else
	{
	gotoxy(1,11);
	cout<<setw(50)<<"INVALID MASTER PASSWORD";
	getch();
	clrscr();
	goto start;
	}
}

if(mopt==4)
{
clrscr();
fstream g8;
g8.open(AX,ios::binary|ios::in);
cout<<setw(45)<<"USER PROFILES";
gotoxy(1,5);
if(sizing()==0)
{
cout<<"NO REGISTERED USERS\n\n";
cout<<"Enter any key to continue: ";
getch();
clrscr();
goto start;
}
cout<<"NUMBER OF REGISTERED USERS: "<<sizing()<<"\n\n";
user u8;
g8.read((char*)&u8,sizeof(u8));
while(!g8.eof())
{
cout<<"USER NAME: "<<u8.name<<"\n\n";
cout<<"PASSWORD :"<<u8.passw<<"\n\n";
cout<<"Enter any key to view next profile\n\n";
getch();
g8.read((char*)&u8,sizeof(u8));
}
cout<<"Enter any key to continue: ";
getch();
clrscr();
g8.close();
goto start;
}

if(mopt==5)
{
goto check2;
}
}



if(mainopt==2)
{
int opt;
do
{
clrscr();
cout<<setw(45)<<"WELCOME USER"<<endl;
gotoxy(1,5);
cout<<"1.LOGIN\n\n2.REMOVE USER\n\nENTER CHOICE: ";
cin>>opt;
if(opt<1||opt>2)
{
cout<<"\nINVALID CHOICE"<<endl;
cout<<"\nEnter any key to continue: ";
getch();
}
}while(opt<1||opt>2);
clrscr();
if(opt==1)
{
if(sizing()==0)
{
cout<<setw(45)<<"LOGIN";
gotoxy(1,5);
cout<<"NO USERS REGISTERED\n\n";
cout<<"Enter any key to continue: ";
getch();
goto end;
}
int flag=0;
char P1[50];
char N1[50];
do
{
clrscr();
cout<<setw(45)<<"LOGIN"<<endl;
gotoxy(1,5);
cout<<"NUMBER OF REGISTERED USERS: "<<sizing()<<"\n\n";
cout<<"Enter username: ";
gets(N1);
fstream g1;
user u1;
g1.open(AX,ios::binary|ios::in);
g1.read((char*)&u1,sizeof(u1));
while(!g1.eof())
{
if(strcmp(u1.name,N1)==0)
{
strcpy(nam,u1.name);
flag=1;
do
{
cout<<endl;
cout<<"Enter password: ";
password(P1);
if(strcmp(u1.passw,P1)==0)
{
strcpy(pass,P1);
break;
}
else
cout<<"\n\nINVALID PASSWORD\n ";
}while(strcmp(u1.passw,P1)!=0);
}
g1.read((char*)&u1,sizeof(u1));
}
g1.close();
if(flag==0)
{
cout<<"USER NAME DOES NOT EXIST\n"<<endl;
cout<<"Enter any key to continue :";
getch();
}
}while(flag==0);
}
if(opt==2)
{
char N3[50],P3[50];
int flag=0;
if(sizing()==0)
{
cout<<setw(45)<<"REMOVE USER";
gotoxy(1,5);
cout<<"NO USERS REGISTERED\n\n";
cout<<"Enter any key to continue: ";
getch();
goto end;
}
do
{
clrscr();
cout<<setw(45)<<"REMOVE USER";
gotoxy(1,5);
cout<<"Enter user name to be deleted: ";
gets(N3);
fstream g3,g4;
user u3;
g3.open(AX,ios::binary|ios::in);
g4.open("tempuser.dat",ios::binary|ios::app);
g3.seekg(0,ios::beg);
g3.read((char*)&u3,sizeof(u3));
while(!g3.eof())
{
if(strcmp(u3.name,N3)==0)
{
flag=1;
do
{
cout<<endl;
cout<<"Enter password: ";
password(P3);
if(strcmp(P3,u3.passw)!=0)
{
cout<<"\n\nInvalid password"<<endl;
}
else
break;
}while(strcmp(P3,u3.passw)!=0);
}
else
{
g4.write((char*)&u3,sizeof(u3));
}
g3.read((char*)&u3,sizeof(u3));
}
g3.close();
g4.close();
remove(AX);
rename("tempuser.dat",AX);
if(flag==0)
{
cout<<"\nUser name does not exist\n\n";
cout<<"Enter any key to continue";
getch();
}
}while(flag==0);
cout<<"\n\nUser deleted";
getch();
goto end;
}
}

check2:
clrscr();
int mainch;
char mu[10];
do
{
cout<<setw(45)<<"WELCOME "<<nam;
gotoxy(1,5);
cout<<"1. USE APPLICATION\n\n";
cout<<"2. INSTRUCTIONS \n\n";
cout<<"3. PRODUCT INFORMATION\n\n";
cout<<"4. EXIT APPLICATION \n\n";
cout<<"ENTER CHOICE: ";
cin>>mainch;
if(mainch<1||mainch>4)
{
cout<<"Invalid Choice"<<endl;
cout<<"Enter any key to continue: ";
getch();
clrscr();
}
if(mainch==1)
{
clrscr();
int choice,ptr;
char u[30];
do
{
cout<<endl;
cout<<setw(50)<<"STOCKS, SALES AND BILLS\n";
cout<<endl;
cout<<"OPTIONS\n"<<endl;
cout<<"1.ADD NEW PRODUCT\n"<<endl;
cout<<"2.SEARCH FOR EXISTING PRODUCT INFORMATION\n"<<endl;
cout<<"3.MODIFY EXISTING PRODUCT INFORMATION\n"<<endl;
cout<<"4.DELETE EXISTING PRODUCT\n"<<endl;
cout<<"5.DELETE ALL PRODUCTS\n"<<endl;
cout<<"6.DISPLAY PRODUCT INFORMATION FOR ALL PRODUCTS\n"<<endl;
cout<<"7.SALES AND BILL GENERATION\n"<<endl;
cout<<"8.EXIT TO MAIN MENU\n"<<endl;
do
{
ptr=0;
cout<<"Enter choice: ";
cin>>choice;
if(choice<1||choice>8)
{
	cout<<"Invalid choice."<<endl;
	ptr=1;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
if(choice==1)
{
char pass1[50];
strcpy(pass1,pass);
do
{
clrscr();
gotoxy(18,10);
if(strcmp(pass,pass1)!=0)
{
cout<<"INVALID PASSWORD.\n\n"<<endl;
}
gotoxy(18,15);
cout<<"ENTER PASSWORD: ";
password(pass1);
if(strcmp(pass,pass1)==0)
{
clrscr();
cout<<setw(50)<<"ADDING NEW PRODUCT";
gotoxy(1,5);
insert();
cout<<endl;
cout<<"ENTER any key to Continue: ";
getch();
clrscr();
}
}while(strcmp(pass,pass1)!=0);
}
else if(choice==2)
{
clrscr();
cout<<setw(50)<<"SEARCHING FOR PRODUCT";
gotoxy(1,5);
if(size()==0)
{
	cout<<"No products available."<<endl;
	ptr=1;
	cout<<endl;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
else
search();
cout<<"ENTER any key to Continue: ";
getch();
clrscr();
}
else if(choice==3)
{
char pass2[50];
strcpy(pass2,pass);
if(size()!=0)
{
do
{
clrscr();
gotoxy(18,10);
if(strcmp(pass,pass2)!=0)
{
cout<<"INVALID PASSWORD.\n\n"<<endl;
}
gotoxy(18,15);
cout<<"ENTER PASSWORD: ";
password(pass2);
if(strcmp(pass,pass2)==0)
{
clrscr();
cout<<setw(50)<<"MODIFYING PRODUCT";
gotoxy(1,5);
	if(size()==0)
{
	cout<<"No products available."<<endl;
	ptr=1;
	cout<<endl;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
else
modify();
cout<<"ENTER any key to Continue: ";
getch();
clrscr();
}
}while(strcmp(pass,pass2)!=0);
}
	if(size()==0)
{
	clrscr();
	cout<<setw(50)<<"MODIFYING PRODUCT";
	gotoxy(1,5);
	cout<<"No products available."<<endl;
	ptr=1;
	cout<<endl;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
}
else if(choice==4)
{
char pass2[50];
strcpy(pass2,pass);
if(size()!=0)
{
do
{
clrscr();
gotoxy(18,10);
if(strcmp(pass,pass2)!=0)
{
cout<<"INVALID PASSWORD.\n\n"<<endl;
}
gotoxy(18,15);
cout<<"ENTER PASSWORD: ";
password(pass2);
if(strcmp(pass,pass2)==0)
{
clrscr();
cout<<setw(50)<<"DELETING PRODUCT";
gotoxy(1,5);
	if(size()==0)
{
	cout<<"No products available."<<endl;
	ptr=1;
	cout<<endl;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
else
{
delete_code();
}
cout<<"ENTER any key to Continue: ";
getch();
clrscr();
}
}while(strcmp(pass,pass2)!=0);
}
      else if(size()==0)
{
	clrscr();
	cout<<setw(50)<<"DELETING PRODUCT";
	gotoxy(1,5);
	cout<<"No products available."<<endl;
	ptr=1;
	cout<<endl;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
}
else if(choice==5)
{
char pass2[50];
strcpy(pass2,pass);
do
{
clrscr();
gotoxy(18,10);
if(strcmp(pass,pass2)!=0)
{
cout<<"INVALID PASSWORD.\n\n"<<endl;
}
gotoxy(18,15);
cout<<"ENTER PASSWORD: ";
password(pass2);
if(strcmp(pass,pass2)==0)
{
clrscr();
cout<<setw(50)<<"DELETING ALL PRODUCTS";
gotoxy(1,5);
delete_all();
cout<<"All products deleted sucessfully.\n"<<endl;
cout<<"ENTER any key to Continue: ";
getch();
clrscr();
}
}while(strcmp(pass,pass2)!=0);
}
else if(choice==6)
{
clrscr();
cout<<setw(50)<<"DISPLAYING ALL PRODUCTS";
gotoxy(1,5);
cout<<"NUMBER OF PRODUCTS: "<<size()<<"\n\n";
	if(size()==0)
{
	cout<<"No products available."<<endl;
	ptr=1;
	cout<<endl;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
else
disp_list();
cout<<"ENTER any key to Continue: ";
getch();
clrscr();
}
else if(choice==7)
{
char pass2[50];
strcpy(pass2,pass);
if(size()!=0)
{
do
{
clrscr();
gotoxy(18,10);
if(strcmp(pass,pass2)!=0)
{
cout<<"INVALID PASSWORD.\n\n"<<endl;
}
gotoxy(18,15);
cout<<"ENTER PASSWORD: ";
password(pass2);
if(strcmp(pass,pass2)==0)
{
clrscr();
cout<<setw(40)<<"SALES AND BILL";
gotoxy(1,5);
	if(size()==0)
{
	cout<<"No products available."<<endl;
	cout<<endl;
	ptr=1;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
else
sales();
cout<<"ENTER any key to Continue: ";
getch();
clrscr();
}
}while(strcmp(pass,pass2)!=0);
}
	if(size()==0)
{
	clrscr();
	cout<<setw(40)<<"SALES AND BILL";
	gotoxy(1,5);
	cout<<"No products available."<<endl;
	cout<<endl;
	ptr=1;
	cout<<"ENTER any key to Continue: ";
	getch();
	clrscr();
	break;
}
}
}while(ptr==1);
}while(choice!=8);
clrscr();
}
else if(mainch==2)
{
clrscr();
char v[30];
int sch;
do
{
do
{
cout<<endl;
cout<<setw(50)<<"INSTRUCTIONS\n";
cout<<endl;
cout<<"OPTIONS\n"<<endl;
cout<<"1.ADD NEW PRODUCT\n"<<endl;
cout<<"2.SEARCH FOR EXISTING PRODUCT INFORMATION\n"<<endl;
cout<<"3.MODIFY EXISTING PRODUCT INFORMATION\n"<<endl;
cout<<"4.DELETE EXISTING PRODUCT\n"<<endl;
cout<<"5.DELETE ALL PRODUCTS\n"<<endl;
cout<<"6.DISPLAY PRODUCT INFORMATION FOR ALL PRODUCTS\n"<<endl;
cout<<"7.SALES AND BILL GENERATION\n"<<endl;
cout<<"8.EXIT TO MAIN MENU\n"<<endl;
cout<<"ENTER CHOICE: ";
cin>>sch;
if(sch<1||sch>8)
{
cout<<endl;
cout<<"Invalid choice. Please choose again.\n";
cout<<"Enter any key to continue: ";
getch();
}
clrscr();
}while(sch<1||sch>8);
if(sch==1)
{
clrscr();
cout<<setw(50)<<"ADDING NEW PRODUCT";
gotoxy(1,5);
cout<<"PRODUCT CODE: Must be unique for every product.\n\n";
cout<<"PRODUCT NAME: Any name can be entered.\n\n";
cout<<"TYPE: There are 3 types. Measured by NUMBER, WEIGHT and VOLUME.\n\n";
cout<<"PRICE: Any price greater than zero.\n\n";
cout<<"QUANTITY: Must be whole number for type 1. Can be decimal value for the other 2 types. Should be more than zero.\n\n";
cout<<"SPECIAL OFFER: Choose if it can be present for a product or not. If discount is present, it should be between 0 and 100.\n";
cout<<"If discount is given as 0% it is considered as NO SPECIAL OFFER.\n\n";
cout<<"Enter any key to continue: ";
getch();
clrscr();
}
if(sch==2)
{
clrscr();
cout<<setw(50)<<"SEARCHING FOR PRODUCT";
gotoxy(1,5);
cout<<"Can be used if atleast one product is stored.\n\n";
cout<<"Enter CODE of product to be searched.\n\n";
cout<<"View the NAME, PRICE, SPECIAL OFFER and QUANTITY AVAILABLE.\n\n";
cout<<"Enter CODE of only the products stored.\n\n";
cout<<"Enter any key to continue: ";
getch();
clrscr();
}
if(sch==3)
{
clrscr();
cout<<setw(50)<<"MODIFYING PRODUCT";
gotoxy(1,5);
cout<<"Can be used if atleast one product is stored.\n\n";
cout<<"Enter CODE to be modified.\n\n";
cout<<"Enter CODE of only the products stored.\n\n";
cout<<"Choose the parameter to be modified. NAME, PRICE, SPECIAL OFFER or QUANTITY.\n\n";
cout<<"You can change the quantity type and special offer type.\n\n";
cout<<"Enter a valid modified value.\n\n";
cout<<"Enter any key to continue: ";
getch();
clrscr();
}
if(sch==4)
{
clrscr();
cout<<setw(50)<<"DELETING PRODUCT";
gotoxy(1,5);
cout<<"Can be used if atleast one product is stored.\n\n";
cout<<"Enter CODE of the product to be deleted.\n\n";
cout<<"Enter CODE of only the products stored.\n\n";
cout<<"This deletes that particular product and the product cannot be used unless a newproduct of that code is created.\n\n";
cout<<"Enter any key to continue: ";
getch();
clrscr();
}
if(sch==5)
{
clrscr();
cout<<setw(50)<<"DELETING ALL PRODUCTS";
gotoxy(1,5);
cout<<"This deletes every single product stored.\n\n";
cout<<"None of the products can be used again.\n\n";
cout<<"Do not use this if you want to remove a single product.\n\n";
cout<<"Use the DELETING PRODUCT facility to remove a single product.\n\n";
cout<<"Application can be put to use only if a new product is added.\n\n";
cout<<"Enter any key to continue: ";
getch();
clrscr();
}
if(sch==6)
{
clrscr();
cout<<setw(50)<<"DISPLAY ALL PRODUCTS";
gotoxy(1,5);
cout<<"Can be used if atleast one product is stored.\n\n";
cout<<"This displays product information of all products stored.\n\n";
cout<<"You can view the product information of all products one-by-one.\n\n";
cout<<"Enter any key to continue: ";
getch();
clrscr();
}
if(sch==7)
{
clrscr();
cout<<setw(50)<<"SALES AND BILL";
gotoxy(1,5);
cout<<"Can be used if atleast one product is stored.\n\n";
cout<<"Enter valid product CODE.\n\n";
cout<<"Enter valid QUANTITY.\n\n";
cout<<"QUANTITY should not be greater than stock available.\n\n";
cout<<"Generate Bill after completing sales.\n\n";
cout<<"If product has a discount, the price after discount will be displayed.\n\n";
cout<<"If stock of products is zero, enter QUANTITY as zero to continue.\n\n";
cout<<"Enter any key to continue: ";
getch();
clrscr();
}
}while(sch!=8);
}
if(mainch==3)
{
clrscr();
prod_info();
}
}while(mainch!=4);
end:
clrscr();
gotoxy(19,12);
cout<<"THANK YOU FOR USING THIS APPLICATION";
getch();
}


