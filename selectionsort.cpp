#include<iostream>
using namespace std;
void sort(int a[],int n)
{
	int t=0;
	int min=0;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int a[]={2,5,8,1,9,4};
	int n=sizeof(a)/sizeof(int);
	sort(a,n);
}
