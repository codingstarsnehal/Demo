#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	cout<<"enter the number"<<endl;
	cin>>n;
		cout<<"Sumation of n natural numbers are:"<<endl;

	do{
		sum=sum+i;
		cout<<sum<<endl;
		i++;
	}while(i<=n);
	return 0;
}
