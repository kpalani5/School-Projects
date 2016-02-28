#include <iostream.h>
#include <conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
cout<<"                                     MATH QUIZ"<<endl;
cout<<" "<<endl;
cout<<"Answer the Questions"<<endl;
cout<<" "<<endl;
cout<<"1) What is 25+34?"<<endl;
cout<<"Answer : "<<endl;
cin>>a;
cout<<" "<<endl;
cout<<"2) What is 45-14?"<<endl;
cout<<"Answer : "<<endl;
cin>>b;
cout<<" "<<endl;
cout<<"3) What is 5x64?"<<endl;
cout<<"Answer : "<<endl;
cin>>c;
cout<<" "<<endl;
cout<<"4) What is 125/25?"<<endl;
cout<<"Answer : "<<endl;
cin>>d;
cout<<" "<<endl;
cout<<"5) What is 4[3{3-(-2)}]?"<<endl;
cout<<"Answer : "<<endl;
cin>>e;
cout<<" "<<endl;
if(a==59)
{
cout<<"YOUR RESULTS"<<endl;
cout<<"Question 1 - Right!"<<endl;
}
else
{
cout<<"Question 1 - Wrong!"<<endl;
}
if(b==31)
{
cout<<"Question 2 - Right!"<<endl;
}
else
{
cout<<"Question 2 - Wrong!"<<endl;
}
if(c==320)
{
cout<<"Question 3 - Right!"<<endl;
}
else
{
cout<<"Question 3 - Wrong!"<<endl;
}
if(d==5)
{
cout<<"Question 4 - Right!"<<endl;
}
else
{
cout<<"Question 4 - Wrong!"<<endl;
}
if(e==60)
{
cout<<"Question 5 - Right!"<<endl;
}
else
{
cout<<"Question 5 - Wrong!"<<endl;
}
cout<<" "<<endl;
{
if (a==59&&b==31&&c==320&&d==5&&e==60)
{
cout<<"Your score is 5 out of 5.";
}
else
if (a!=59&&b==31&&c==320&&d==5&&e==60||a==59&&b!=31&&c==320&&d==5&&e==60||a==59&&b==31&&c!=320&&d==5&&e==60||a==59&&b==31&&c==320&&d!=5&&e==60||a==59&&b==31&&c==320&&d==5&&e!=60)
{
cout<<"Your score is 4 out of 5.";
}
else
if (a!=59&&b!=31&&c==320&&d==5&&e==60||a!=59&&b==31&&c!=320&&d==5&&e==60||a!=59&&b==31&&c==320&&d!=5&&e==60||a!=59&&b==31&&c==320&&d==5&&e!=60||a==59&&b!=31&&c!=320&&d==5&&e==60||a==59&&b!=31&&c==320&&d!=5&&e==60||a==59&&b!=31&&c==320&&d==5&&e!=60||a==59&&b==31&&c!=320&&d!=5&&e==60||a==59&&b==31&&c!=320&&d==5&&e!=60||a==59&&b==31&&c==320&&d!=5&&e!=60)
{
cout<<"Your score is 3 out of 5.";
}
else
if (a!=59&&b!=31&&c!=320&&d==5&&e==60||a!=59&&b!=31&&c==320&&d!=5&&e==60||a!=59&&b!=31&&c==320&&d==5&&e!=60||a!=59&&b==31&&c!=320&&d!=5&&e==60||a!=59&&b==31&&c!=320&&d==5&&e!=60||a!=59&&b==31&&c==320&&d!=5&&e!=60||a==59&&b!=31&&c!=320&&d!=5&&e==60||a==59&&b!=31&&c!=320&&d==5&&e!=60||a==59&&b==31&&c!=320&&d!=5&&e!=60||a==59&&b!=31&&c==320&&d!=5&&e!=60)
{
cout<<"Your score is 2 out of 5.";
}
else
if (a!=59&&b!=31&&c!=320&&d!=5&&e==60||a!=59&&b!=31&&c!=320&&d==5&&e!=60||a!=59&&b==31&&c!=320&&d!=5&&e!=60||a!=59&&b!=31&&c==320&&d!=5&&e!=60||a==59&&b!=31&&c!=320&&d!=5&&e!=60)
{
cout<<"Your score is 1 out of 5.";
}
else
cout<<"Your score is 0 out of 5.";
}
cout<<"\n";
cout<<"Thank You for taking this Quiz!"<<endl;
getch();
}
