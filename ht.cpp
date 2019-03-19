#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *left;
    node *right;
    int data;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1 + max(height(root->left),height(root->right));
}
int main()
{
    node *root = NULL;
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    cout<<height(root->right);
}