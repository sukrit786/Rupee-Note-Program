#include<bits/stdc++.h>
using namespace std;

struct node
{
    int start;
    int finish;
};
bool sorting(node a1,node a2)
{
    return (a1.finish<a2.finish);
}
void selection(node arr[],int n)
{
    sort(arr, arr+n, sorting);
    int i=0;
    cout<<"("<<arr[0].start<<","<<arr[0].finish<<")"<<",";
    for(int j=1; j<n;j++)
    {
        if(arr[i].finish<=arr[j].start)
        {
            cout<<"("<<arr[j].start<<","<<arr[j].finish<<")"<<",";
            i=j;
        }
    }
}
int main()
{
    node arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
}