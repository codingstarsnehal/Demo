#include<iostream>
using namespace std;
int main()
{
	int choice,a,b,sum,sub,mul,div;
	char ch;
	do{
	cout<<"********1:Addition  2:substraction  3:multiplication  4:Division********"<<endl;
	cout<<"Enter a & b value"<<endl;
	cin>>a>>b;
	cout<<"Enter a valid choice"<<endl;
	cin>>choice;
	if(choice==1)
	{
		sum=a+b;
		cout<<"Addition of a & b is:";
		cout<<sum<<endl;
	}
	else if(choice==2)
	{
		sub=a-b;
		cout<<"Substraction of a & b is:";
		cout<<sub<<endl;
	}
		else if(choice==3)
	{
		mul=a*b;
		cout<<"Multiplication of a & b is:";
		cout<<mul<<endl;
	}
		else if(choice==4)
	{
		div=a/b;
		cout<<"Division of a & b is:";
		cout<<div<<endl;
	}
	cout<<"Do you want to continue (press Yfor yes/Nfor no) "<<endl;
	cin>>ch;
}while(ch=='y');
	return 0;
}
