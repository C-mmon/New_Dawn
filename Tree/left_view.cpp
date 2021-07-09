#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int data)
		{
			this->data=data;
			this->left=nullptr;
			this->right=nullptr;
		}
};

//Understanding we are only interested in printing 
//In every level we can only print one node
//intially we are the 0 level
// when we increase we first print the 0th level and we check the conditio//0==0 and hence we print the first node 
//recursion one-
int max_level=0;
void printleft(Node* root, int level)
{
	if(root==NULL)
	{
		return;
	}
	if(level==max_level)
	{
		cout<<root->data<<endl;
		max_level++;
	}
	printleft(root->left,level+1);
	printleft(root->right,level+1);
}

int main()
{
Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(4);
root->right->left=new Node(5);

printleft(root,0);

return 0;
}


