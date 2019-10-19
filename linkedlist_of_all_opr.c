#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* head;

void insert_beg(void);
void insert_end(void);
void insert_nth(void);

//void delete_beg(void);
//void delete_end(void);
//void delete_nth(void);

void display(void);


int main()
{
	head=NULL; // here we making aur list empty
	int choice;
	while(1)
	{
		printf("\n\nImplementation of single linked lists\n");
		printf("\n\n1.insert at Begining\n2.insert at End\n3.insert at nth Position\n");
		printf("4.delete at begining\n5.delete at end\n6.delete at nth position\n7.display\n8.EXIT\n\n");
		scanf("%d\n",&choice);
		switch(choice)
		{
			case 1: insert_beg();
					break;
			case 2: insert_end();
					break;
			case 3: insert_nth();
					break;
			//case 4: delete_beg();
					//break;
			//case 5: delete_end();
					//break;
			//case 6: delete_nth();
					//break;
			case 7: display();
					break;
			case 8: exit(1);
					break;
			default:printf("invalid choice");
		}
	}
	return 0;
}


void insert_beg()
{
	int x=0;
	struct node* ptr;
		ptr = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter the number to be added at the beginning of the list\n");
		scanf("%d",&x);
	if(ptr==NULL)
	{
		printf("Warning : Memory is full !!");
	}
	else if(head==NULL)
	{
		
		ptr->data=x;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
		ptr->data=x;
		ptr->next=head;
		head=ptr;
	}
}


void insert_end()
{
	int x;
	struct node* temp;
	struct node* ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter the number to be added at the end of the list\n");
		scanf("%d",&x);
	if(ptr==NULL)
	{
		printf("Warning : Memory is full !!");
	}
	
	else if(head==NULL)
	{
		
		ptr->data=x;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;		
		}
		temp->next=ptr;
		ptr->data=x;
		ptr->next=NULL;
	}
}


void insert_nth()
{
	
	int x,n;
	struct node* ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter the number to be added at the end of the list\n");
		scanf("%d",&x);
		printf("Enter the position to where the element to be enter");
		scanf("%d",&n);
	if(n==1)
	{	
		insert_beg();
	}
	if(ptr==NULL)
	{
		printf("Warning : Memory is full !!");
	}
	else if(head==NULL)
	{
		
		ptr->data=x;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
	
	}
	
	
}


void display()
{
	struct node* temp;
	temp=head;
	while(temp->next!=NULL)
	{
		printf("\n##########################\n");
		printf("Element is : %d\n",temp->data);
		printf("\n##########################\n");
		temp=temp->next;
	}
	
}



































