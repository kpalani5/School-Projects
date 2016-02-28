#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int daysinmonth(int,int);
int days,month,year,seq_count;
int i;
int days_in_month[13];
printf("Enter Month (01-12) ....");
scanf("%d",&month);
printf("Enter Day (01-31) ....");
scanf("%d",&days);
printf("Enter Year (1800->) ....");
scanf("%d",&year);
for(i=1;i<=12;i++)
days_in_month[i]=daysinmonth(i,year);
seq_count=0;
for(i=1;i<=(month-1);i++)
seq_count +=days_in_month[i];
seq_count +=days;
printf("Today is the %d sequential day of the year",seq_count);
getch();
}
int daysinmonth(int month,int year)
{
int days;
if (month==2)
{
 if( (year%4==0&&year%100!=0)
	|| (year%400==0)          )
   days=29;
   else days=28;
}
else
{
	if(month==4 || month==6 || month==9 || month==11)
	days=30;
	else days=31;
}
return(days);
}
