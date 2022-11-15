#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		
		for(int k=1;k<i;k++)
		{
			cout<<" ";
		}
		for(int j=i;j<=(8-i);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
