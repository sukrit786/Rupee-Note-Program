#include<bits/stdc++.h>
using namespace std;
struct node 
{
    node *next;
    int data;
};
void push(node *&start,int val)
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
node *combine(node *start1,node *start2)
{
    node *result = NULL;
    if(start1 == NULL)
    {
        return start2;
    }
    else if(start2 == NULL)
    {
        return start1;
    }
    if(start1->data<=start2->data)
    {
        result = start1;
        result->next = combine(start1->next,start2);
    }
    else
    {
        result = start2;
        result->next = combine(start1,start2->next);
    }
    return result; 
}
void print(node *start3)
{
    node *p = start3;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main()
{
    node *start1 = NULL;
    node *start2 = NULL;
    node *start3 = NULL;
    for(int i = 1; i < 5 ; i++)
    {
        push(start1,i);
    }
    for(int i = 5; i < 10 ; i++)
    {
        push(start2,i);
    }
    start3 = combine(start1,start2);
    print(start3);
}