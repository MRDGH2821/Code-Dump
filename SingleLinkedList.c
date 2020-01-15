#include <stdio.h>

struct node
{
	int data;
	struct node *next;
}

void insert(struct node* nd,int data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data=data;
	nd->next=new_node;
	new_node->next=NULL;
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf(" %d->", node->data);
		node = node->next;
	}
}

int main()
{
	int ch=1;
	int dt;
	struct node head;
	head->next=NULL;
	do
	{
		printf("1.Insert\n2.Display\n0.Exit\n\n");
		scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter number: ")
scanf("%d",&dt);
insert(&head,dt)
break;
case 2:
printList(&head);
case 0:
exit();
};
	}
	while(ch!=0)
}
