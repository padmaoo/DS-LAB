#include<stdio.h>
#define SIZE 10
void push();
void pop();
void display();
int num,stack[SIZE],top=-1,i,ch=1;
int main()
{
	while(ch != 0)
	{
		printf("Enter choice : \n 1.push\n 2.pop\n 3.display\n ");
        	scanf("%d",&ch);
		switch(ch)
		{
			case 0: ch = 0;
				break;
			case 1:push();
			      break;
			case 2:pop();
			      break;
			case 3:display();
			      break;
			default:printf("Enter choice between 1 to 3");
		}
	}
}
void push()
{
	if(top == SIZE - 1)
	{
		printf("Stack overflows");
	}
	else
	{
		printf("Enter element to push into stack :");
		scanf("%d",&num);
		top++;
		stack[top] = num;
	}
}
void pop()
{
	if(top == -1)
	{
		printf("Stack underflows");
	}
	num = stack[top];
	top--;
}
void display()
{
	if(top == -1)
	{
		printf("No elements to display");
	}
	for(i=0;i<=top;i++)
	{
		printf("Elements of stack are %d\n",stack[i]);
	}
}

			     
	
