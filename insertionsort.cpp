#include<iostream>
using namespace std;
void sort(int a[],int n)
{
	int key,j;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int a[]={2,8,3,9,7,4};
	int n=sizeof(a)/sizeof(int);
	sort(a,n);
	return 0;
}
