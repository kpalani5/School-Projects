#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

struct element
{
char a;
element *next;
};

void push(element *&top,char x)
{
element *temp=new element;
temp->a=x;
temp->next=NULL;
if(top==NULL)
{
top=temp;
}
else
{
temp->next=top;
top=temp;
}
}

char pop(element *&top)
{
 char r;
 r=top->a;
 element *temp;
 temp=top;
 top=top->next;
 delete temp;
 return r;
}

int precedence(char x)
{
if(x=='^')
return 3;
else if(x=='/'||x=='*')
return 2;
else if(x=='(')
return 0;
else
return 1;
}

void main()
{
clrscr();
char infix1[50];
cout<<"Enter infix expression: ";
gets(infix1);
char infix[50]="(";
strcat(infix,infix1);
strcat(infix,")");
int i,j;
char postfix[50]="\0";
int ct=0;
element *top=NULL;
for(i=0;i<strlen(infix);i++)
{
if(infix[i]=='(')
{
push(top,infix[i]);
}
else if(((infix[i]>64)&&(infix[i]<91))||((infix[i]>96)&&(infix[i]<123)))
{
postfix[ct]=infix[i];
ct++;
}
else if(infix[i]==')')
{
char t=pop(top);
while(t!='(')
{
postfix[ct]=t;
ct++;
t=pop(top);
}
}
else
{
if(precedence(top->a)<precedence(infix[i]))
{
push(top,infix[i]);
}
else
{
while(precedence(top->a)>=precedence(infix[i]))
{
postfix[ct]=pop(top);
ct++;
}
push(top,infix[i]);
}
}
}
postfix[ct]='\0';
cout<<endl;
cout<<postfix;
getch();
}