#include<iostream>
using namespace std;
int main()
{
    int choice;
    char ch;
   
	
	do{
	 cout<<"ch=1 for cofee   and   ch=2 for tea"<<endl;
    cout<<"enter choice";
    cin>>choice;
    if(choice==1)
    {
        cout<<"enjoy your cofee"<<endl;
    }
    else if(choice==2)
	{
        cout<<"enjoy your tea"<<endl;
    }
    else{
        cout<<"invalid choice"<<endl;
    }
    cout<<"Do you want to continue(enter y for yes and N for No)"<<endl;
    cin>>ch;
    
}while(ch=='y');
	return 0;
}
