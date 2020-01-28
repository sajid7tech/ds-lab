#include<iostream>
// #include<stdio.h>
#include<stdlib.h>
#define max 5

using namespace std;

class stack{
    int top;
    int a[max];
    public :
        void init();
        void push();
        void pop();
        void display();
};

void stack::init()
{
    top=-1;
}
void stack::push()
{
    if(top==max-1)
    {
        cout<<"!!!!Stackoverflow!!!!\n";
    }
    else
    {
        int x;
        top++;
        cout<<"Enter the element to be push\n";
        cin>>x;
        a[top]=x;
    }
}

void stack::pop()
{
    if (top==-1)
    {
        cout<<"Stackunderflow\n";
    }
    else
    {
        cout<<"The deleted element is"<<a[top]<<"with index"<<top<<endl;
        top--;
    }
}

void stack::display()
{
    if(top==-1)
    {
        cout<<"Nothing to print\n";
        return ;
    }
    cout<<"\nThe element in the stack are";
    for (int i = top; i>=0; i--)
    {
        cout<<a[i]<<endl;
    }
    
}

int main()
{
    stack s;
    s.init();
    int choice;
    while(98)
    {
        cout<<"Enter your choice \n";
        cout<<"1.PUSH\n2.POP\n3.Display\n4.Exit\n";
        cin>>choice;
        switch (choice)
        {
            case 1 : s.push();
                    break;
            case 2 : s.pop();
                    break;
            case 3 : s.display();
                    break;
            case 4 : exit(1);

            default : cout<<"Invalid choice";
        }
    
    }
return 0;
}