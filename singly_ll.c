#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node*next;
}Node;
Node *head = NULL;
Node *temp = NULL;
Node *getNode();
void display();
void insert_beg();
void insert_end();
void insert_at_pos();
void delete_beg();
void delete_end();
void delete_at_pos();
void count();
void main()
{
	int ch;
	while(1)
	{
		printf("\n1)Insert in beginning\n2.Insert at last\n3.Insert at given position\n4.Delete from beginning\n5.Delete from last\n6.Delete at given position\n7.Length of linked list\n8.Display\n9.Exit\n");
	        printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Inserting at beginning\n");
			        insert_beg();
			        break;
			case 2: printf("Inserting at end\n");
				insert_end();
				break;
			case 3: printf("Inserting at given position\n");
				insert_at_pos();
				break;
			case 4: printf("Deleting at beginning\n");
				delete_beg();
				break;
			case 5: printf("Deleting at end\n");
				delete_end();
				break;
			case 6: printf("Deleting at given position\n");
				delete_at_pos();
				break;
			case 7: printf("Length of list\n");
				count();
				break;
			case 8: printf("Displaying the elements\n");
				display();
				break;
			case 9: printf("Exit");
				exit(0);
		}
	}
}
void insert_beg()
{
	Node *new = getNode();
	if(head == NULL)
	{
		temp = new;
		head = new;
	}
	else
	{
		new -> next = head;
		head = new;
	}
}
Node *getNode()
{
	Node*new = (Node*)malloc(sizeof(Node));
	printf("Enter element :");
	scanf("%d",&new->data);
	new->next = NULL;
	return new;
}
void insert_end()
{
	Node *new = getNode();
	if(head == NULL)
	{
		temp = new;
		head = new;
	}
	else
	{
		temp -> next = new;
		temp = new;
	}
}
void insert_at_pos()
{
	int i,k;
	printf("\nEnter position to insert an element :");
        scanf("%d",&k);
	Node *new = getNode();
	if(head == NULL)
	{
		head = new;
		temp = new;
		return;
	}
	while(temp -> next != NULL)
	{
		temp = temp -> next;
	}
	new -> next = temp -> next;
	temp -> next = new;
}
void display()
{
	Node*curr;
	curr = head;
	while(curr != NULL)
	{
		printf("%d",curr->data);
		curr = curr -> next;
	}
}
void delete_beg()
{
	Node*temp1 = head;
	if(head == NULL)
	{
		printf("\nList is empty");
	}
	else if(head -> next == NULL)
	{		
		printf("\nData deleted %d",head->data);
		head = NULL;
		temp1 = NULL;
		free(temp1);
	}
	else
	{
		head = head -> next;
		free(temp1);
	}
}
void delete_end()
{
	Node*temp1;
	if(head == NULL)
	{
		printf("\nThe list is empty");
	}
	else if(head -> next == NULL)
	{
		printf("Data deleted %d",head->data);
		head = NULL;
		temp1 = NULL;
		free(temp1);
	}
	else
	{
		Node*t;
		while(temp -> next != temp)
		{
			temp1 = temp1 -> next;
		}
		t = temp -> next;
		temp1 -> next = NULL;
		temp = temp1;
		free(t);
	}
}
void delete_at_pos()
{
	Node*temp1 = head;
	Node*t;
	int i,k;
	printf("\nEnter position to delete an element :");
	scanf("%d",&k);
	for(i=1;i<k-1;i++)
	{
		temp1 = temp1 -> next;
	}
	t = temp1 -> next;
	temp1 -> next = temp1 -> next -> next;
	free(t);
}
void count()
{
	Node*current = head;
	int len=0;
	while(current != NULL)
	{
		current = current -> next;
		len++;
	}
	printf("Length of linked list is : %d",len);
}









