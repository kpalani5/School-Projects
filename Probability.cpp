#include <iostream.h>
#include <conio.h>
void main()
{
int i;
float h;
float t;
float on;
float tw;
float th;
float fo;
float fi;
float si;
clrscr();
cout<<"                             PROBABILITY CALCULATOR"<<endl;
cout<<" "<<endl;
cout<<"Choose from one of these options."<<endl;
cout<<" "<<endl;
cout<<"1 - Coin"<<endl;
cout<<" "<<endl;
cout<<"2 - Dice"<<endl;
cout<<" "<<endl;
cout<<"Choose from one of these numbers : ";
cin>>i;
cout<<" "<<endl;
switch(i)
{
case 1:cout<<"The two possible outcomes of a coin are HEADS and TAILS"<<endl;
cout<<"Choose the number of Heads : "<<endl;
cin>>h;
cout<<"Choose the number of Tails : "<<endl;
cin>>t;
cout<<"The Probability of Heads is ";
cout<<h/(h+t);
cout<<"  "<<endl;
cout<<"The Probability of Tails is ";
cout<<t/(h+t);
cout<<"  "<<endl;break;
case 2:cout<<"The six possible outcomes after the rolling of a die are 1,2,3,4,5 and 6."<<endl;
cout<<"Choose the number of Ones : "<<endl;
cin>>on;
cout<<"Choose the number of Twos : "<<endl;
cin>>tw;
cout<<"Choose the number of Threes : "<<endl;
cin>>th;
cout<<"Choose the number of Fours : "<<endl;
cin>>fo;
cout<<"Choose the number of Fives : "<<endl;
cin>>fi;
cout<<"Choose the number of Sixes : "<<endl;
cin>>si;
cout<<"The Probability of Ones is ";
cout<<on/(on+tw+th+fo+fi+si);
cout<<"  "<<endl;
cout<<"The Probability of Twos is ";
cout<<tw/(on+tw+th+fo+fi+si);
cout<<"  "<<endl;
cout<<"The Probability of Threes is ";
cout<<th/(on+tw+th+fo+fi+si);
cout<<"  "<<endl;
cout<<"The Probability of Fours is ";
cout<<fo/(on+tw+th+fo+fi+si);
cout<<"  "<<endl;
cout<<"The Probability of Fives is ";
cout<<fi/(on+tw+th+fo+fi+si);
cout<<"  "<<endl;
cout<<"The Probability of Sixes is ";
cout<<si/(on+tw+th+fo+fi+si);
cout<<"  "<<endl;break;
default:cout<<"Choose only any one of the two options";break;
}
getch();
}
