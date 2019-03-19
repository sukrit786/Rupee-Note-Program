#include<bits/stdc++.h>
using namespace std;

struct buysell
{
    int buy;
    int sell;
};

void calc(int price[], int n)
{
    buysell arr[n/2+1];
    int i = 0;
    int count = 0;
    if(n == 1)
    {
        return;
    }
    while(i < n-1)
    {
        while((i < n-1) && (price[i+1]<=price[i]))
        {    
            i++;
        }
        if(i==n-1)
        {
            break;
        }
        arr[count].buy = i++;
        while((i < n) && (price[i] >= price[i-1]))
            i++;
        arr[count].sell = i-1;
        count++;
    }
    for(int i=0;i<count;i++)
    {
        cout<<arr[i].buy<<arr[i].sell;
    }
}

int main()
{
    int price[] = {100, 180, 260, 310, 40, 535, 695}; 
    int n = sizeof(price)/sizeof(price[0]); 
    calc(price,n);
}