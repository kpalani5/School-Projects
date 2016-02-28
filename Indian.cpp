#include <iostream.h>
#include <conio.h>
void main()
{
int a;
clrscr();
cout<<"                               The Indian Sub-Continent"<<endl;
cout<<" "<<endl;
cout<<" The following are the countries from the Indian Sub-Continent."<<endl;
cout<<" "<<endl;
cout<<" 1 - India"<<endl;
cout<<" "<<endl;
cout<<" 2 - Sri Lanka"<<endl;
cout<<" "<<endl;
cout<<" 3 - Pakistan"<<endl;
cout<<" "<<endl;
cout<<" 4 - Bangladesh"<<endl;
cout<<" "<<endl;
cout<<" 5 - Nepal"<<endl;
cout<<" "<<endl;
cout<<" 6 - Bhutan"<<endl;
cout<<" "<<endl;
cout<<" 7 - Maldives"<<endl;
cout<<" "<<endl;
cout<<" Type a number from 1 to 7 and find out the information on these countries : ";
cin>>a;
cout<<"  "<<endl;
switch(a)
{
case 1:cout<<"                                     INDIA"<<endl;
cout<<" CAPITAL - New Delhi"<<endl;
cout<<" CURRENCY - Indian Rupee"<<endl;
cout<<" MAIN LANGUAGE - Hindi"<<endl;break;
case 2:cout<<"                                 SRI LANKA"<<endl;
cout<<" CAPITAL - Colombo"<<endl;
cout<<" CURRENCY - Lankan Rupee"<<endl;
cout<<" MAIN LANGUAGE - Sinhalese"<<endl;break;
case 3:cout<<"                                 PAKISTAN"<<endl;
cout<<" CAPITAL - Islamabad"<<endl;
cout<<" CURRENCY - Pakistani Rupee"<<endl;
cout<<" MAIN LANGUAGE - Urdu"<<endl;break;
case 4:cout<<"                                BANGLADESH"<<endl;
cout<<" CAPITAL - Dhaka"<<endl;
cout<<" CURRENCY - Taka"<<endl;
cout<<" MAIN LANGUAGE - Bengali"<<endl;break;
case 5:cout<<"                                     NEPAL"<<endl;
cout<<" CAPITAL - Kathmandu"<<endl;
cout<<" CURRENCY - Nepali Rupee"<<endl;
cout<<" MAIN LANGUAGE - Nepali"<<endl;break;
case 6:cout<<"                                   BHUTAN"<<endl;
cout<<" CAPITAL - Thimphu"<<endl;
cout<<" CURRENCY - Ngultrum"<<endl;
cout<<" MAIN LANGUAGE - Dzongkha"<<endl;break;
case 7:cout<<"                                  MALDIVES"<<endl;
cout<<" CAPITAL - Male`"<<endl;
cout<<" CURRENCY - Maldivian Rufiyaa"<<endl;
cout<<" MAIN LANGUAGE - Dhivehi"<<endl;break;
default:cout<<" Choose only numbers from 1 to 7.";break;
}
getch();
}
