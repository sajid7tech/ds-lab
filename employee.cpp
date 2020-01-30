#include<iostream>
#include<string>
#include<stdlib.h>
#define max 10000

using namespace std;

class employee {
    private :
        string name;
        int ID;
        double basic_salary;
        double gross_salary;
        double DA;
        double IT;
        double net_salary;
    public :
        void read();
        void calc();
        void display();
};
void employee::read()
{
    cout<<"Enter the name of the employee\n";
    cin>>name;
    cout<<"Enter employee ID\n";
    cin>>ID;
    cout<<"Enter the basic salary (in Rupees)\n";
    cin>>basic_salary;

}
void employee::calc()
{
    DA = 0.52*basic_salary;
    gross_salary = DA + basic_salary;
    IT = 0.30 * gross_salary;
    net_salary = DA + basic_salary - IT;
}
void employee::display()
{
    cout<<"\nNAME :"<<name<<endl;
    cout<<"ID :"<<ID<<endl;
    cout<<"Basic Salary(in Rupees): "<<basic_salary<<endl;
    cout<<"DA(in Rupees): "<<DA<<endl;
    cout<<"IT(in Rupees): "<<IT<<endl;
    cout<<"Gross Salary(in Rupees): "<<gross_salary<<endl;
    cout<<"Net Salary(in Rupees): "<<net_salary<<endl;
}

int main()
{
    employee E[max],*p;
    int n;
    cout<<"Enter the no of employee: ";
    cin>>n;
    for (int i = 0; i <= n-1; i++)
    {
        p=&E[i];
        p->read();
        // p->calc();
        // p->display();
    }
       for (int i = 0; i <= n-1; i++)
    {
        p=&E[i];
        // p->read();
        p->calc();
        p->display();

    }
    
}
