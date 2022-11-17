#include<iostream>
using namespace std;
int main()
{
	int i,ele,a[]={2,5,3,9,1};
	bool b=0;
//	int n=sizeof(a)/sizeof(int);
	cout<<"Enter the element to be searched"<<endl;
	cin>>ele;
	for(i=0;i<=4;i++)
	{
		if(a[i]==ele)
		{
			b=1;
			break;
		}
	}
	if(b==1)
	{
		cout<<"The element is found"<<endl;
		cout<<"The element is found at index "<<i;
	}
	else
	cout<<"The element is not found";
	return 0;
}
