#include<iostream>
using namespace std;
int sum=0;
int a[4];
int total()
{
	for(int i=1;i<=4;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
int main()
{

	cout<<"Enter elements";
	for(int i=1;i<=4;i++)
	{
		cin>>a[i];
	}
		total();
	cout<<sum;
	return 0;
}
