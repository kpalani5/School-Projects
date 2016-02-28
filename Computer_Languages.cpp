#include <iostream.h>
#include <conio.h>
void main()
{
int a;
clrscr();
cout<<"              CLASSIFICATION OF PROGRAMMING LANGUAGES"<<endl;
cout<<"                                  - A Programme designed by P.KARTHIK PERUMAL"<<endl;
cout<<" "<<endl;
cout<<"The following are the languages which are used for computer programming."<<endl;
cout<<" "<<endl;
cout<<"PASCAL = 1"<<endl;
cout<<"C = 2"<<endl;
cout<<"C++ = 3"<<endl;
cout<<"C# = 4"<<endl;
cout<<"Ada = 5"<<endl;
cout<<"Modula-2 = 6 "<<endl;
cout<<"BASIC = 7"<<endl;
cout<<"COBOL = 8"<<endl;
cout<<"FORTRAN = 9"<<endl;
cout<<"Micro-Assembler = 10"<<endl;
cout<<"Java = 11"<<endl;
cout<<"Forth = 12"<<endl;
cout<<"Assembler = 13"<<endl;
cout<<" "<<endl;
cout<<"The computer programming languages can be classified in two ways."<<endl;
cout<<" "<<endl;
cout<<"One way is to classify them into structured and non-structured languages."<<endl;
cout<<" "<<endl;
cout<<"Another way is to classify them according to their levels such as higher level  languages, middle level languages and lower level languages."<<endl;
cout<<" "<<endl;       
cout<<"Type the number shown next to these programming languages and find out how they are classified."<<endl;
cout<<" "<<endl;
cout<<"Type a number from 1 to 13 : ";
cin>>a;
cout<<" "<<endl;
switch(a)
{
case 1:cout<<"PASCAL is structured and is a higher level language.";break;
case 2:cout<<"C is structured and is a middle level language.";break;
case 3:cout<<"C++ is structured and is a middle level language.";break;
case 4:cout<<"C# is structured and is a middle level language.";break;
case 5:cout<<"Ada is structured and is a higher level language.";break;
case 6:cout<<"Modula-2 is structured and is a higher level language.";break;
case 7:cout<<"BASIC is non-structured and is a higher level language.";break;
case 8:cout<<"COBOL is non-structured and is a higher level language.";break;
case 9:cout<<"FORTRAN is non-structured and is a higher level language.";break;
case 10:cout<<"Micro-Assembler is structured and is a lower level language.";break;
case 11:cout<<"Java is structured and is a middle level language.";break;
case 12:cout<<"Forth is structured and is a middle level language.";break;
case 13:cout<<"Assembler is structured and is a lower level language.";break;
default:cout<<"Type numbers only from 1 to 13.";break;
}
getch();
}
