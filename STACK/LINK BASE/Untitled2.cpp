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
   
 void inserAtstart(int data)
		{
			node*newnode;
			newnode=new node;
		  newnode->data=data;
			newnode->next= head;
			head= newnode;
		}

void deleteAtstart()
		{
			node*temp;
			temp=head;
			head=head->next;
			temp->next = NULL;
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
	
	obj.inserAtstart(9);
	cout<<"after insertion at start"<<endl;
	obj.display();
	

	obj.deleteAtstart();
	cout<<"delete at head="<<endl;
		obj.display();

	
	
}

