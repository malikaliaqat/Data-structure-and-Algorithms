#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
class LL{
	node*head;
	node*curr;
	public:
		LL()
		{
			head=NULL;
			curr= NULL;
		}
		    
		void insert  (int data)
		{
			node*newnode;
			newnode= new node;
			newnode->data= data;
			newnode->next= NULL;
			 if ( head== NULL)
			 {
			 	head = newnode;
			 }
			 else {
			 	curr= head;
			 	while(curr->next !=NULL)
			 	{
			 		curr= curr->next ;
				 }
				 curr->next= newnode;
			 }
			 
		}
		   
		    // funtion for insert at start
		    void inserAtstart(int data)
		{
			node*newnode;
			newnode=new node;
		  newnode->data=data;
			newnode->next= head;
			head= newnode;
		}
		
		//function to delete at start
		void deleteAtstart()
		{
			node*temp;
			temp=head;
			head=head->next;
			temp->next = NULL;
			delete temp;
		}
		//function to insert at end
		void insertAtend(int data)
		{
			node*newnode;
			newnode= new node;
//			node*curr= head;
			newnode->data= data;
			newnode->next= NULL;
			 if ( head== NULL)
			 {
			 	head = newnode;
			 }
			 else {
			 	curr= head;
			 	while(curr->next !=NULL)
			 	{
			 		curr= curr->next ;
				 }
				 curr->next= newnode;
		}
		}
		
		//funtion to delete at the end
		void deleteAtend()
		{
			 curr=head;
			 while(curr->next->data!=6)
			 {
			 	curr=curr->next;
			 }
			 node*temp;
			 temp=curr->next;
			 curr->next=NULL;
			 delete temp;
		}
//	
	//function to insert at the mid
	void insertAtmid(int data)
	{
		node*newnode;
		newnode=new node;
		newnode->data=data;
		newnode->next=NULL;
		curr=head;
		while(curr->next->data!=5)
{
	cout<<curr->data<<"-->";

			curr=curr->next;
			
		}
		newnode->next=curr->next;
		curr->next = newnode;
	}
//	
	//function to delete at the mid 
	void deleteAtmid(int data)
	
	{
		curr=head;
		while(curr->next->data!=4)
		{

			curr=curr->next;
			
		}
		node*temp;
		temp=curr->next;
		curr->next=temp->next;
		delete temp;
		
	}
		void display ()
		{
			curr= head;
			while(curr)
			{
				cout<<curr->data<<"---->";
				curr=curr->next;
			}
			cout<<"NULL"<<endl;
		}
};
int main ()
{
	LL obj ;
	obj.insert(1);
	obj.insert(2);
	obj.insert(3);
	obj.insert(4);
	obj.insert(5);
	obj.insert(6);
cout<<"simple traversal="<<endl;
	obj.display();

	obj.inserAtstart(16);
	cout<<"insert at head="<<endl;
	obj.display();
	
	obj.deleteAtstart();
	cout<<"delete at head="<<endl;
		obj.display();

	obj.insertAtend(3);
		cout<<"insert at end="<<endl;
	obj.display();

	obj.deleteAtend();
		cout<<"delete at end="<<endl;
		obj.display();
	
    obj.insertAtmid(16);
 	cout<<"insert at mid="<<endl;
    obj.display();

     obj.deleteAtmid(4);
	cout<<"delete at mid="<<endl;
     obj.display();
     return 0;

}