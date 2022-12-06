#include<iostream>
using namespace std;
 int main()
 {
 	int  a[]={3,9,2,1,7,8,4};
 	int *p=a;
 	int *q=a+3;
 	int *r=a+5;
 	
 	cout<<p<<" "<<*p+5<<endl;
 	*p=20;
 	
 	cout<<*r<<" "<<*q<<" "<<r<<" "<<q<<endl;
 	cout<<*q+1<<" "<<*(q+1);
 	return 0;
 }
