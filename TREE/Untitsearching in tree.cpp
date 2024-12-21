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
 
// 
//  void preorder (struct node*root)
//  {
//  	if(root!=NULL){
//  	printf ("%d",root->data);
//  	preorder (root->left);
//  	preorder (root->right);
//	  }
//  }
//  
//  
//   void postorder (struct node*root)
//  {
//  	if(root!=NULL){
//  	preorder (root->left);
//  	preorder (root->right);
//  	cout<<root->data;
//	  }
//  }
//   void inorder (struct node*root)
//  {
//  	if(root!=NULL)
//  	{
//  			preorder (root->left);
//  	cout<<root->data;
//  	preorder (root->right);
//	  }
//  }
struct node * search (struct node*root ,int key )
{
	if(root==NULL){
		return NULL;
		
	}
	if(key=root->data){
		return root;
		
	}
	else if (key<root->data){
		return search(root->left ,key);
		
	else{
		return search(root->left ,key);
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
 	   

 struct node* n=search ( p,7);
 if(n!=NULL)
 {
 	 printf("found: %d",n->data);
 }
else 
{
printf("element not found");
}

 	 
//cout<<"\nthe preorder traversal is there"<<endl;
// 	  preorder(p);
//cout<<"\nthe postorder traversal is there"<<endl;
// 	  postorder(p);
//cout<<"\nthe inorder traversal is there"<<endl;
// 	  inorder(p);
// 	   printf("&d",isBST(p));
 	 return 0;
 	 
 }
 
 
 
 