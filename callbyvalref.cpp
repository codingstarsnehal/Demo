#include<iostream>
using namespace std;

void fun(int b,int a)
{
	int t=b;
	b=a;
	a=t;
}
void fun2(int *b,int *a)
{
	int t;
	t=&b;
	&b=&a;
	&a=t;
}
int main()
{
	int a=20,b=30;
	fun(b,a);
	cout<<a<<b;
	fun2(&b,&a);
	cout<<a<<b;
	return 0;
}
