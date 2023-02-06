#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int size;
struct stack
{
	int arr[MAX];
	int top;
};
void init_stk(struct stack *st)
{
	st -> top = -1;
}
void push(struct stack *st,int num)
{
	if(st -> top == size - 1)
	{
		printf("\nStack overflow");
	}
	st -> top++;
	st -> arr[st->top] == num;
}
int pop(struct stack *st)
{
	int num;
	if(st -> top == -1)
	{
		printf("\nStack underflow");
	}
	num = st -> arr[st -> top];
	st -> top--;
}
void display(struct stack *st)
{
	int i;
	for(i=st->top;i>=0;i--)
	{
		printf("\n%d",st->arr[i]);
	}
}
int main()
{
	int element,opt,val;
	struct stack ptr;
	init_stk(&ptr);
	printf("\nEnter stack size :");
	scanf("%d",&size);
	while(1)
	{
		printf("\nSTACK PRIMITIVE OPERATIONS");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n4.Quit");
		printf("\n");
		printf("\nEnter your option : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\nEnter the element into stack :");
				scanf("%d",&val);
				push(&ptr,val);
				break;
			case 2:
				element = pop(&ptr);
				printf("\n The element popped from stack is : %d",element);
				break;
			case 3:
				printf("\n The current stack element are :");
				display(&ptr);
				break;
			case 4:
				exit(0);
			default:
				printf("\nEnter correct option!!");
		}
	}
	return (0);
}



