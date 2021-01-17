#include<bits/stdc++.h>
using namespace std;

int totalpaths=0;
bool isVisited(int i,int j,int n,vector<vector<bool>> &visited)
{
    return i>=0 and j>=0 and i<n and j<n and visited[i][j]==false;
}

void maze(int i,int j,int n,vector<vector<int>> &grid, vector<vector<bool>> &visited)
{
    if(i==n-1 && j==n-1)
    {
        totalpaths++;
        return;
    }
    if(not isVisited(i,j,n,visited))
    {
       return;
    }
    visited[i][j]=true;
    if( i+1<n and grid[i+1][j]==0)
    {
        maze(i+1,j,n,grid,visited);
    }
    if( i-1 >= 0 and grid[i-1][j]==0)
    {
        maze(i-1,j,n,grid,visited);
    }
    if( j+1<n and grid[i][j+1]==0)
    {
        maze(i,j+1,n,grid,visited);
    }
    if( j-1>=0 and grid[i][j-1]==0)
    {
        maze(i,j-1,n,grid,visited);
    }
    visited[i][j]=false;
    return;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> grid(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<vector<bool>> visited(n,vector<bool> (n,false));
    maze(0,0,n,grid,visited);
    cout<<totalpaths;
}