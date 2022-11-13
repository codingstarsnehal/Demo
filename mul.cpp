#include<iostream>
using namespace std;
int main()
{
	int n,i=1,mul=1;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"Multiplication of n natural numbers are:"<<endl;
	do{
		mul=mul*i;
		
		cout<<mul<<endl;
		i++;
	}while(i<=n);
	
	return 0;
}
