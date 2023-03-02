#include <iostream>
#include <bits/stdc++.h>

class Node
{
    public:
        int value_;
        Node *left_;
        Node *right_;
        Node(int);

        Node* insert(Node *root,int data)
        {
            if(root==NULL) //korzeń jest zerem to drzewo jest puste
            {
                return new Node(data);
            }
            else if(data<=root->value_)//wartość wprowadzona jest mniejsza 
            {
                root->left_=insert(root->left_,data);
            }
            else
            {
                root->right_=insert(root->right_,data);
            }
            return root;
        }
        void inorder(Node* root)
        {
            if(root==NULL)
                return;

            inorder(root->left_);
            std::cout<<root->value_<<" ";
            inorder(root->right_);
        }
        bool contains(Node* root,int check)
        {

            if

        }


};
Node::Node(int a):value_(a)
{
    left_=NULL;
    right_=NULL;
}

int main()
{
    Node Tree(0);
    Node* root = NULL;
    //Number of nodes to be inserted
    int t;
    std::cin>>t;
    while(t--){
        int data;
        std::cin>>data;
        root = Tree.insert(root,data);
    }
    Tree.inorder(root);
    return 0;
}
