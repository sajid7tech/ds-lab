#include<iostream>

using namespace std;

int main()
{
	int a,r,n;
	cout<<"Enter number of digits\n";
	cin>>n;
	cout<<"Enter any number\n";
	cin>>a;
	for(int i=0; i<n ; i++)
	{
		r=a%10;
		a=a/10;
		cout<<r;	
	}
 
	return 0;	
	
}
