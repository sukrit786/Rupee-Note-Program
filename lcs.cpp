#include<bits/stdc++.h>
using namespace std;

int longestcommonsub(char *a,char *b,int m,int n)
{
    int lcs[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            {
                lcs[i][j]=0;
            }
            else if(a[i-1]==b[j-1])
            {
                lcs[i][j]=1+lcs[i-1][j-1];
            }
            else
            {
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }           
        }
    }
    cout<<lcs[m][n];
}
int main(){
    // int m,n;
    char a[]="stone";
    char b[]="longest";
    int m=strlen(a);
    int n=strlen(b);
    longestcommonsub(a,b,m,n);
}