#include<iostream>
using namespace std;
int main()
{
	int temp;
	int a[]={5,2,7,1,3};
	int n=sizeof(a)/sizeof(int);
		cout<<"Every iteration of sorting"<<endl;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
		
	}
			//cout<<a[j]<<"\t";
			cout<<endl;
			
		}
	}
	cout<<endl;
	cout<<"sorted elements are"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
