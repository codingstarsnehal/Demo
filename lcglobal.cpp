#include<iostream>
using namespace std;
int a=10,b=2;

void fun1()
{
	int sum;
	sum=a+b;
	cout<<sum<<endl;
}
int fun2(int a, int b)
{
	int sub;
	sub=a-b;
	cout<<sub<<endl;
	return sub;
}
int fun3(int a, int b)
{
	int mul;
	mul=a*b;
	cout<<mul;
	return mul;
}
 
 int main()
 {
 	int sum,sub,mul;
 	fun1();
 	int s=fun2(a,b);
 	int m=fun3(2,3);
 	return 0;
 }
