#include<bits/stdc++.h>
using namespace std;

int tilearrange(int n)
{
    int count[n+1];
    if(n<=2)
    {
        return 1;
    }
    if(n>2){
        count[1]=1;
        count[2]=2;
    for(int i=3;i<=n;i++)
    {
        count[i]=count[i-1]+count[i-2];
    }
    return count[n];
    }
}
int main()
{
    int n=5;
    cout<<tilearrange(n);
}