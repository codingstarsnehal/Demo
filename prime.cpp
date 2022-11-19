#include<iostream>
using namespace std;

int main()
{
	int i,m=0,flag=0;      
    int n;
    cout<<"Enter the number";
    cin>>n;
    m=n/2;      
    if(n==0||n==1)
	{  
    cout<<n<<" is not prime number";      
    }
	else
	{  
     for(i=2;i<=m;i++)
	{
	        
     	if(n%i==0)
	 	{      
     	cout<<n<<" is not prime number";      
     	flag=1;      
     	break;      
     	}      
	}
   if(flag==0) 
    {
	cout<<n<<" is prime number";
	  }  
  } 
	return 0;
}
