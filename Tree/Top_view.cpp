#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
     //key represent the relative horizontal distance of th node from the root node.
    //Value in the map maintains a pair containing the node's value and its level number 
    
    //Preorder Traversal 
    
    //if encounter a node 
    void top(Node* root,int dist,int level,map<int,pair<int,int> > &store)
    {
        
        
        if(root==NULL)
        {
            return; 
        }
        
        //encounterining the horizontal distance 
        if(store.count(dist)==0)
        {
            store[dist]=make_pair(root->data,level);
        }
        //suppose another node with increase in level
        //if the current level is less than the maximum level we have seen so far update
        else if(level<store[dist].second)
        {
            //update the value 
            store[dist]=make_pair(root->data,level);
        }        
        
        //traversing to the left decreases the h_dist to the root by 1
        //traversing downward increases the 
        top(root->left,dist-1,level+1,store);
        top(root->right,dist+1,level+1,store);
    }
    void topView(Node * root) 
    {
        map <int,pair<int,int> > m;
        top(root,0,0,m);
        for(auto it=m.begin();it!=m.end();it++)
        {
            cout<<it->second.first<<" ";
        }
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.topView(root);
    return 0;
}
