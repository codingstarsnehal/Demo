#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"ch=1 for cofee and ch=2 for tea"<<endl;
    cout<<"enter choice";
    cin>>ch;

    if(ch==1)
    {
        cout<<"enjoy your cofee"<<endl;
    }
    else if(ch==2){
        cout<<"enjoy your tea";
        cout<<endl;
    }
    else{
        cout<<"invalid choice";
    }
    return 0;
}
