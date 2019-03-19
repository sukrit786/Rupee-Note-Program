#include<bits/stdc++.h>

using namespace std;
const int MAX=100;
int gminer(int mat[][MAX],int n,int m)
{
    int g[n][m];
    memset(g,0,sizeof(g));
    for(int c=n-1; c>=0; c--)
    {
        for(int r=0; r<n; r++)
        {
            int right = (c==n-1)?0:g[r][c+1];
            int right_up = (c==n-1||r==0)?0:g[r-1][c+1];
            int right_down = (c==n-1||r==m-1)?0:g[r+1][c+1];

            g[r][c] = mat[r][c]+max(right,max(right_up,right_down));
        }
    }
    int ans = g[0][0];
    for(int i=0;i<m;i++)
    {
        ans = max(ans,g[i][0]);
    }
    cout<<ans;
}
int main() 
{ 
    int n = 4, m = 4; 
    int mat[][MAX] = {{10, 33, 13, 15},
                  {22, 21, 04, 1},
                  {5, 0, 2, 3},
                  {0, 6, 14, 2}}; 
  
    gminer(mat,n,m);
  
    return 0; 
} 