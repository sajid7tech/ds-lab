#include<iostream>
#define max 4
using namespace std;

void push(void);
void pop(void);
void display(void);

struct stack{
	int top;
	int a[max];
}s;

int main()
{
	s.top=-1;
	int choice;
	while(1)
	{
		cout<<"1 Push\n2.Pop\n3.dislay\n4.Exit\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1 : push();
				 break;
			case 2 : pop();
				break;
			case 3 : display();
				break;
			default : exit(1);

		}
	}
	return 0;
}

void push()
{
	int x;
	cout<<"Enter the element to be push\n";
	cin>>x;
	if(s.top==max-1)
	{
		cout<<"Stackoverflow\n";
	}
	else{
	s.a[s.top]=x;
	s.top++;
	}
}

void pop()
{
	if(s.top==-1)
	{
		cout<<"Stackunderflow";
		return ;
	}
	else
	{	
		cout<<"the deleted element is"<<s.a[s.top]<<endl;
		s.top--;
	}
	
}

void display()
{
	if(s.top==-1)
	{
		cout<<"Nothing to Print\n";
		return ;
	}
	else
	{
		for(int i=0 ; i<=s.top;i++)
		cout<<s.a[i]<<endl;
	}
}




















