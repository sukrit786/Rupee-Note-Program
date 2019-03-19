#include<bits/stdc++.h>
// #include<mutex>
using namespace std;

mutex mu;

void sharedResource(string s1,int id)
{
    mu.lock();
    cout<<s1<<id<<endl;
    mu.unlock();
}

void print()
{
    for(int i=0;i>-100;i--)
    {
        sharedResource(("from t1: "),i);
        // cout<<i<<endl;
    }
}

int main()
{
    thread t1(print);
    for(int i=0;i<100;i++)
    {
        sharedResource(("from main: "),i);
        // cout<<i<<endl;
    }
    t1.join();
}