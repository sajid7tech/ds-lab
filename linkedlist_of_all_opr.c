#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int data;
	struct node *next;
};

struct node* head;

void insert_beg(void);
void insert_end(void);
void insert_nth(void);

void delete_beg(void);
void delete_end(void);
void delete_nth(void);

void display(void);


int main()
{
while(1)
	head=NULL; // here we making our list empty
	int choice;
	while(1)
	{
		printf("\n*********************Implementation of single linked lists**********************\n");
		printf("\n1.insert at Begining\n2.insert at End\n3.insert at nth Position\n");
		printf("4.delete at begining\n5.delete at end\n6.delete at nth position\n7.display\n8.EXIT\n\n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert_beg();
					break;
			case 2: insert_end();
					break;
			case 3: insert_nth();
					break;
			case 4: delete_beg();
					break;
			case 5: delete_end();
					break;
			case 6: delete_nth();
					break;
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
		ptr->data=x;
		ptr->next=NULL;
		temp->next=ptr;
	}
}


void insert_nth()
{
	
	int x,n,i;
	struct node* ptr;
	struct node* temp1,*temp2;
	//struct node* temp2;
	ptr = (struct node*)malloc(sizeof(struct node));

		printf("Enter the position to where the element to be inserted\n");
		scanf("%d",&n);
		printf("\nEnter the number to the list\n");
		scanf("%d",&x);

	if(ptr==NULL)
	{
		printf("Warning : Memory is full !!\n");
	}
	
	if(n==1)
	{
		
		ptr->data=x;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
		temp1=head;

		for(i=1;i<n-1;i++)
		{
			temp1=temp1->next;	
		}

		ptr->data=x;
		temp2=temp1->next;
		ptr->next=temp2;
		temp1->next=ptr;
		
	}
	
}


void delete_beg()
{
	struct node *temp;
	temp=head;
	if(temp==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("The deleted Element is : %d",temp->data);
		head=temp->next;
		free(temp);
	}
		
}


void delete_end()
{
		struct node *temp1,*temp2;
		int n,i;
		temp1=head;
		if(head==NULL)
		{
			printf("List is Empty nothing to delete\n");
		}
		else
		{
			temp1=head;
			for(i=1;i<n-1;i++)
			{
				temp1=temp1->next;
			}
			temp2=temp1->next;
			printf("The Deleted element is : %d\n",temp2->data);			
			temp1->next=NULL;
			free(temp2);
		}
	
}


void delete_nth()
{
	struct node *temp1,*temp2; 
	int n,i;
	printf("from which position do you what to remove the element\n");
	scanf("%d",&n);
		if(head==NULL)
		{
			printf("Nothing to delete");
		}
		else
		{

			temp1=head;
			for(i=1;i<n-1;i++)
			{
				temp1=temp1->next;
			}
			temp2=temp1->next;
			printf("The Deleted element is : %d\n",temp2->data);	
			temp1->next=temp2->next;
			free(temp2);	

		}
}



void display()
{
	struct node * temp;
	temp=head;
	printf("\n##########################\n\n");

	while(temp!=NULL)
	{
		printf("Element is : %d\n",temp->data);
		temp=temp->next;
	}

	printf("\n##########################\n");
}


