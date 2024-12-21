#include<iostream>
#include<malloc.h>
using namespace std;
 struct node 
 {
 	int data;
 	struct node*right ;
 	struct node*left ;
 };
 struct node*createnode(int data)
 {
 	struct node*n;
   n=(struct node*) malloc (sizeof (struct node));
 	n->data = data;
 	n->right= NULL;
    n->left= NULL;
    return n;
 }
// struct node * search (struct node*root ,int key )
//{
//	if(root==NULL){
//		return NULL;
//		
//	}
//	if(key=root->data){
//		return root;
//		
//	}
//	else if (key<root->data){
//		return search(root->left ,key);
//		
//	}
//	else{
//		return search(root->right ,key);
//	}
//}

 void insert (node * root , int key ){
 	node*prev=NULL;
 	while(root!=NULL){
 		prev=root;
 		if (key==root->data)
 		{
 			printf("cannot inser %d,alrady in bst ",key);
			  			return;
		 }
		 else if (key<root->data){
		 	root=root->left;
		 }
		 else
		 {
		 		root=root->right;
		 }
	 }
}
	 struct node* new =createnode(key)
	 
	{
	
	 if (key<prev->data){
	 	prev->left= new 
	 }
	 else {
	 	prev->right= new
	 }
 }
 int main ()
 {
 	 struct node*p = createnode(5);
 	 struct node*p1 = createnode(3);
 	 struct node*p2 = createnode(6);
 	 struct node*p3 = createnode(1);
 	 struct node*p4 = createnode(4);
 	 
 	 p->left=p1;
 	 p->right=p2;
 	  p1->left=p3;
 	  p1->right=p4;
 	   
 	   
 	  insert (p,7) ;
 	  printf("%d", p->right->right);

// struct node* n=search ( p,7);
// if(n!=NULL)
// {
// 	 printf("found: %d",n->data);
// }
//else 
//{
//printf("element not found");
//}

 	
 	 return 0;
 	 
 }