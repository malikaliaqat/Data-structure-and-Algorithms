#include<iostream>
using namespace std;
class tree{
	public:
	int data;
	tree*left;
	tree*right;
	tree(int dat)
	{	
		data=dat;
		left=NULL;
		right=NULL;
	}
};
tree*search(tree*root,int find)
{
	if(root==NULL||root->data==find)
	{
		return root;
	}
	tree*right=search(root->right,find);
	if(right!=NULL)
	{
		return right;
	}
	return search(root->left,find);
}
int main()
{
	tree*root=new tree(1);
	root->right=new tree(3);
	root->left=new tree(2);
	root->left->left=new tree(4);
	root->left->right=new tree(5);

	int find=7;
	tree*res=search(root,find);
	if(res!=NULL)
	{
		cout<<"Value of  "<<find<<"  is  found in tree";
	}
	else{
		cout<<"Value of   "<<find<<"  not found in tree";
		
	}
	return 0;
}
