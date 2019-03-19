#include<bits/stdc++.h>
using namespace std;

int conversion(string a,string b,int m,int n)
{
    int jama[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
            {
                jama[i][j]=j;
            }
            else if(j==0)
            {
                jama[i][j]=i;
            }
            else if(a[i-1]==b[j-1])
            {
                jama[i][j]=jama[i-1][j-1];
            }
            else 
            {
                jama[i][j]=1+min(jama[i-1][j],min(jama[i][j-1],jama[i-1][j-1]));
            }
        }
    }
    return jama[m][n];
}
int main()
{
    string a = "sunday";
    string b = "saturday";
    int m = a.length();
    int n = b.length();
    cout<<conversion(a,b,m,n);
}