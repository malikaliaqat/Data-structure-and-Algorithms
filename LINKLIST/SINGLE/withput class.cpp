#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};

    //function to insert at start 
     void  insertAtstart (node**head,int newdata)
    {
    node*newnode;
	newnode=new node;
	newnode->data=newdata;
	newnode->next=(*head);
	(*head)=newnode;	
}

//function to delete at start
	void deleteAtstart(node**head)
		{
			node*temp;
			temp= (*head) ;
			(*head )=  (*head)->next;
			temp->next = NULL;
			delete temp;
		}

//function to insert at mid
 void insertAtmid(node*head,int newdata)
	 {	 	
		node*newnode;
		newnode=new node;
		newnode->data= newdata;
		newnode->next=NULL;
		node*curr= head;
		while(curr->next->data!=5)
{
	cout<<curr->data<<"-->";

			curr=curr->next;
			
		}
		newnode->next=curr->next;
		curr->next = newnode;
	}
// function to delete at the mid 
	 void deleteAtmid( node*curr)
	 {
	 
		while(curr->next->data!=4)
		{

			curr=curr->next;
			
		}
		node*temp;
		temp=curr->next;
		curr->next=temp->next;
		delete temp;
	 }

//funtion to insert at end
 void insertAtend(node**head, int newdata)
	      {
	      	node*newnode;
	      	newnode= new node();
	      	node*last = *head;
	      	newnode->data= newdata;
	      	newnode->next =NULL;
	      	{
	      		 if (head ==NULL )
	      		 {
	      		 	*head = newnode;
	   }
				   else{
				   	 node*curr= *head;
				   while(curr->next != NULL)
				   curr = curr->next ;

				   	
				   }
			  }
	      	
		  }


// function to delete at end
	void deleteAtend(node*curr)
		{
			 while(curr->next->data!=6)
			 {
			 	curr=curr->next;
			 }
			 node*temp;
			 temp=curr->next;
			 curr->next=NULL;
			 delete temp;
		}
	 void display(node*curr)
{
	while(curr!=NULL)
	{
	cout<<	curr->data<<"-->";
		curr=curr->next;
	}
	cout<<"NULL"<<endl;
}

int main()
{
	node*head=NULL;
	node*second=NULL;
	node*third=NULL;
	node*fourth=NULL;
	node*fifth=NULL;
	node*tail=NULL;
	head=new node();
	second= new node();
	third= new node();
	fourth= new node();
	fifth= new node();
	tail= new node();
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=fourth;
	fourth->data=4;
	fourth->next=fifth;
	fifth->data=5;
	fifth->next=tail;
	tail->data=6;
	tail->next=NULL;
	cout<<"created single lilnked list ="<<endl;
	display(head);
		
	insertAtstart (&head,7);
	display(head);
	
	deleteAtstart(&head);
	display(head);
	
	insertAtmid(head->next,8);
		display(head);		
		deleteAtmid(head);
		display(head);

 insertAtend(&head,19);
 display(head);

deleteAtend(head);
display(head);

}