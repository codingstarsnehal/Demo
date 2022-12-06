#include<iostream>
using namespace std;
 int main()
 {
 	int  a=10;
 	int *q=&a;
 	int b=50;
 	int *p=&a;
 	int *r=&b;
 	int **y=&p;
 	int **z=&r;
 	
 	cout<<p<<" "<<*p<<" "<<y<<" "<<**y<<endl;
 	*p=20;
 	
 	cout<<p<< " "<<*p<<" "<<a<<" "<<b<<" "<<*q<<" "<<**z;
 	return 0;
 }
