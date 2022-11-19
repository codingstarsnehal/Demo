#include<iostream>
using namespace std;
int main()
{
	int a[]={6,30,85,90,95,98,100};
	int n=sizeof(a)/sizeof(int);
	int s=0,e=n-1,val,res=-1;
	cout<<"Enter the value to be searched";
	cin>>val;
	while(s<=e)
	{
	int mid=(s+e)/2;
		if(a[mid]==val)
		{
			res=mid;
		cout<<"Element is found at"<<mid;
		break;
		}
		else if(a[mid]>val)
		{
		e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		
	}
if(res==-1)
{
	cout<<"Element is not found";
}
	return 0;


}

*****************Implementing binary search using global declaration.****************

#include<iostream>
using namespace std;
int a[]={6,30,85,90,95,98,100};
int n=sizeof(a)/sizeof(int);
int s=0,e=n-1,val,res=-1;

void search()
{
	while(s<=e)
	{
	int mid=(s+e)/2;
		if(a[mid]==val)
		{
		res=mid;
		cout<<"Element is found at"<<mid;
		break;
		}
		else if(a[mid]>val)
		{
		e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		
	}
	if(res==-1)
	{
	cout<<"Element is not found";
	}	
}

int main()
{
	
	cout<<"Enter the value to be searched";
	cin>>val;
	search();
	return 0;


}


****************Implementing binary search using functions*****************

#include<iostream>
using namespace std;

void search()
{
	int a[]={6,30,85,90,95,98,100};
	int n=sizeof(a)/sizeof(int);
	int s=0,e=n-1,val,res=-1;
	while(s<=e)
	{
	int mid=(s+e)/2;
		if(a[mid]==val)
		{
		res=mid;
		cout<<"Element is found at"<<mid;
		break;
		}
		else if(a[mid]>val)
		{
		e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		
	}
	if(res==-1)
	{
	cout<<"Element is not found";
	}	
}

int main()
{
	//int a[]={6,30,85,90,95,98,100};
//	int n=sizeof(a)/sizeof(int);
	//int s=0,e=n-1,val,res=-1;
	int val,res=-1;
	cout<<"Enter the value to be searched";
	cin>>val;
	search();
	return 0;


}

