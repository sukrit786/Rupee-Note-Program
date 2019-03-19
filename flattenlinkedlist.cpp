#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *down;
    node *right;
    int data;
};

void push(node *&start,int data)
{
    node *temp = new node();
    temp->data = data;
    temp->down = NULL;
    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->down = start;
        start = temp;
    }
    
}
void print(node *start)
{
    node *p = start;
    while(p!=NULL)
    {
        cout<<p->data<<"  ";
        p=p->down;
    }
}
node *merge(node *a, node *b)
{
    // cout<<a->data<<b->data;
    if(a == NULL)
    {
        // cout<<"b data: "<<b->data<<endl;
        return b;
    }
    if(b == NULL)
    {
        // cout<<"a data: "<<a->data<<endl;
        return a;
    }
    node *result;
    if(a->data < b->data)
    {
        result = a;
        result->down = merge(a->down, b);
    }
    else
    {
        result = b;
        result->down = merge(a, b->down);
    }
    return result;
}
node *flatten(node *root)
{
    if(root == NULL || root->right == NULL)
    {
        return root;
    }
    cout<<root->data;
    return merge (root,flatten(root->right));
}
int main()
{
    node *start = NULL;
    push(start,30);
    push(start,8);
    push(start,7);
    push(start,5);
    push((start->right),20);
    push((start->right),10);
    push((start->right->right),50);
    push((start->right->right),22);
    push((start->right->right),19);
    push((start->right->right->right),45);
    push((start->right->right->right),40);
    push((start->right->right->right),35);
    push((start->right->right->right),20);
    start = flatten(start);
    print(start);
}