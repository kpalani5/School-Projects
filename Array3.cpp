#include <iostream.h>
#include <conio.h>
void bubble_sort(int *number,int count)
{
int i,j,hold;
for(i=0;i<count-1;i++)
{
for(j=i+1;j<count;j++)
{
if (number[i]>number[j])
{
	hold=number[i];
	number[i]=number[j];
	number[j]=hold; 
}	 
}
}
}
void show_numbers(int *number,int count)
{int i;
for(i=0;i<count;i++)
printf("%d",number[i]);
}
void main()
{
int number[10];
int i;
printf("Enter 10 Numbers");
for(i=0;i<10;i++)
{
printf("\nEnter entry %d.....",i);
scanf("%d",&number[i]);
}
printf("\nInput numbers are:\n");
cout<<" ";
show_numbers(number,10);
bubble_sort(number,10);
printf("\nSorted numbers are:\n");
show_numbers(number,10);
getch();
}
