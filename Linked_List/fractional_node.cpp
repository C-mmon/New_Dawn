#include <bits/stdc++.h>

struct Node
{
	int data;
	Node* next;
}
Node* newNode(int data)
{
	Node* new_node=new Node;
	new_node->data=data;
	new_node->next=NULL;
	return new_node;

}
Node* fractionalNodes(Node* head, int k)
{
	//corner case
	if(k<=0 || head==NULL)
	{
		return NULL;
	}
	Node * fractionalNode=NULL;
	int i=0;
	for(Node* temp=head; temp!=NULL; temp=temp->next)
	{
		if(i%k==0)
		{
			if(fractionalNode==NULL )
			{
				fractionalNode=head;

			}
			else
			{
				fractionalNode=fractionalNode->next;

			}
		}
		i++;
	}
	return fractionalNode;
}
