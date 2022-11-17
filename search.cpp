#include<iostream>
using namespace std;
int main()
{
	int i,ele,a[]={2,5,3,9,1};
	int n=sizeof(a)/sizeof(int);
	cout<<"Enter the element to be searched"<<endl;
	cin>>ele;
	for(i=0;i<=4;i++)
	{
		if(a[i]==ele){
		cout<<"The Element is found"<<endl;
		cout<<"The Element is found at index"<<i;
		break;
	}
	
	}
	if(i==n)
	{
	cout<<"The Element not found";
}
	return 0;
}
