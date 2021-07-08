#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int data)
	{
		this->left=nullptr;
		this->right=nullptr;
		this->data=data;
	}
};

void leaf(Node* root)
{
	if(root==NULL)
	{
		cout<<"Empty Tree"<<endl;
	}
	//base condition
	if(root->left==NULL && root->right==NULL)
	{
		cout<<root->data<<endl;

	}
	if(root->left)
	{
		leaf(root->left);

	}
	if(root->right)
	{
		leaf(root->right);

	}
}
void right_boundary(Node* root)
{
	if(root)
	{
		if(root->right)
		{
			right_boundary(root->right);
			cout<<root->data<<endl;
		}
		else if(root->left)
		{
			right_boundary(root->left);
			cout<<root->data<<endl;
		}
	}
}
void left_boundary(Node* root)
{

		if(root)
		{
			if(root->left)
			{
				left_boundary(root->left);
				cout<<root->data<<endl;
			}
			else if(root->right)
			{
				left_boundary(root->left);
				cout<<root->data<<endl;
			}
		}

}
int main()
{
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);

	root->left->right=new Node(4);
	root->right->right=new Node(5);
	root->right->left=new Node(5);
	root->right->right->right=new Node(6);



	right_boundary(root);
	left_boundary(root);
	leaf(root);



}
