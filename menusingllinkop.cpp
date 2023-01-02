 #include<iostream>
 using namespace std;
 
 class node{
 	public:
 	int data;
 	node *next;
 };
  node *head=NULL;
  
  void insertatbeg(int val)
  {
  	node *p=new node;
  	p->data=val;
  	p->next=NULL;
  	
  	if(head==NULL)
  	{
  		head=p;
	  }
	  else{
	  	p->next=head;
	  	head=p;
	  }
  }
  
  void inseratend(int val)
  {
  	node *p=new node;
  	p->data=val;
  	p->next=NULL;
  	
  	node *temp=head; 
  	while(temp->next!=NULL)
  	{
  	temp=temp->next;
	  }
	  temp->next=p;
  }
  
  void insertatpos(int n, int pos)
  {
  	node *p=new node;
  	p->data=val;
  	p->next=NULL;
  	node *temp=head; 
  	
  	int i=1;
  	while(i<pos-1)
   {
   	temp=temp->next;
   	i++;
		  }
			p->next= temp->next;
			temp->next=p;
  	
  }
  
  void traverse()
  {
  		node *temp=head; 
  		while(temp!=NULL)
  		{
  			cout<<temp->data;
  			temp=temp->next;
		  }
  }
  
  void deletebeg()
  {
  	node *temp=head;
  	head=head->next;
  	delete(temp);
  }
  
  void deleteend()
  {
  	node *temp=head;
  	node *temp2=NULL;
  	while(temp->next!=NULL)
  	{
  		temp2=temp;
  		temp=temp->next;
	  }
	  temp2->next=NULL;
	  delete(temp);
  }
  
  void deletepos()
  {
  	node *temp=head;
  	node *temp2=NULL;
  	int i=1;
  	while(i<pos)
  	{
  		temp2=temp;
  		temptemp->next;
  		i++;
	  }
	  temp2->next=temp->next;
	  delete(temp);
  }
  
  int main()
  {

  	int ch,val,pos;  
	  	cout<<"*************MENU***************";
  	cout<<"\n 1.insert at begning 2.insert at end 3.insert at specific position 4.Traverse\n" "5.Delete at beging \n 6.Delete at end\n 7.Delete atspecific position\n 8.exit";
  	while(1)
  	{
  		cout<<"Enter choice";
  		cin>>ch;
  		switch(ch)
  		{
  			case1:cout<<"Enter the value to be inserted";
  				cin>>val;
  				insertatbeg(val);
  				break;
  				
  			case2:cout<<"Enter the value to be inserted";
  				cin>>val;
  				insertatend(val);
  				break;
  				
  			case3:cout<<"Enter the value to be inserted";
  				cin>val;
  				cout<<"Enter the position where the value should be inserted";
  				cin>>pos;
  				insertatpos(val,pos);
  				break;
  				
  			case4: traverse();
  				break;
  				
  			case5:deletebeg();
  				break;
  				
  			case6:deleteend();
  				break;
  				
  			case7:cout<<"Enter the position where the value to be deleted";
  				cin>>pos;
			  deletepos();
			  break;
		
			case 8:exit(0);
		
			default: cout<<"ERROR! invalid choice";
  				
		  }
	  }
	  return 0;
  	
  }
  
