#include<iostream>
using namespace std;
int main()
{
    int a=2,b=4,temp;
    cout<<"before swaping the numbers are:"<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping the numbers are:"<<endl;
    cout<<"a="<<a<<"b="<<b;
    return 0;
}