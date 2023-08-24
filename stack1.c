/*implementation of stack using array*/
#include<stdio.h>
#include<conio.h>
#define SIZE	5
struct stack
{
	int item[SIZE];
	int top;
};
typedef struct stack intstack;
void push(intstack *);
void pop(intstack *);
void display(intstack);

int main()
{
	int choice;
	intstack s;
	s.top=-1;
	do
	{
		system("cls");
		printf("Menu\n------\n");
		printf("1. For push\n2.	For pop\n3.	For Display\n");
		printf("4.	For exit\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					push(&s);
					break;
			case 2:
					pop(&s);
					break;
			case 3:
					display(s);
					getch();
					break;
			case 4:
					printf("Exiting ......");
					break;
			default:
					printf("Wrong choice!!!");
		}
	}while(choice!=4);
return 0;
}

void push(intstack *ps)
{
	int x;
	if(ps->top==SIZE-1)
	{
		printf("Stack overflow");
		getch();
		return;
	}
	printf("Enter integer to push: ");
	scanf("%d",&x);
	(ps->top)++;
	ps->item[ps->top]=x;
}

void pop(intstack *ps)
{
	if(ps->top==-1)
	{
		printf("Stack underflow");
		getch();
		return;
	}
	printf("popped element is: %d",ps->item[ps->top]);
	(ps->top)--;
}

void display(intstack s)
{
	int i;
	if(s.top==-1)
	{
		printf("Stack is empty");
		getch();
		return;
	}
	for(i=0;i<=s.top;i++)
		printf("%d\t",s.item[i]);
}
