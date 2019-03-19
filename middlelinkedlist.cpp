#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *next;
    int data;
};
void addnode(node *&start,int val)
{
    node *temp = new node;
    temp->next = NULL;
    temp->data = val;
    node *p = start;
    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }  
}
void print(node *start)
{
    node *temp = start;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int count(node *start)
{
    node *k = start;
    int count=0;
    while(k!=NULL)
    {
        count++;
        k=k->next;
    }
    return count;
}
int findmid(node *start,int n)
{
    if(n%2==0)
    {
        n=(n/2)+1;
    }
    else
    {
        n=n/2;
    }
    cout<<n;
    int count = 0;
    node *p = NULL;
    while(p!=NULL){
        if(n==count)
        {
            return 5;
        }
        count++;
        p=p->next;
    }
    
}
int main()
{
    node *start = NULL;
    addnode(start,10);
    addnode(start,20);
    addnode(start,30);
    addnode(start,40);
    addnode(start,50);
    addnode(start,60);
    int n = count(start);
    print(start);
    
    cout<<"NULL"<<endl<<findmid(start,n);
}