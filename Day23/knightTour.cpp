#include<bits/stdc++.h>
using namespace std;

bool isItSafe(vector<vector<int>> &grid,int i,int j,int n,vector<vector<bool>> &visited)
{
    return i>=0 and j>=0 and i<n and j<n and visited[i][j]==false;
}

int totalPath=0;

void display(vector<vector<int>> &grid,int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<" ";
        }
        cout << endl;
    }
}

void knightTour(vector<vector<int>> &grid,int i,int j,int n,int countPath,vector<vector<bool>> &visited){
    if(countPath==n*n-1){
        totalPath++;
        grid[i][j]=countPath;
        display(grid,n);
        cout<<"\n\n";
        return;
    }
    if(countPath>=n*n){
        return;
    }
    int xdir[8]={-2,-1,-2,-1,2,1,2,1};
    int ydir[8]={-1,-2,1,2,-1,-2,1,2};
    visited[i][j]=true;
    grid[i][j]=countPath;
    for(int k=0;k<8;k++)
    {
        if(isItSafe(grid,i+xdir[k],j+ydir[k],n,visited)){
            knightTour(grid,i+xdir[k],j+ydir[k],n,countPath+1,visited);
        }
    }
    visited[i][j]=false;
    grid[i][j]=-1;
}


int main(){
    int n;
    int countPath=0;
    cin>>n;
    vector<vector<int>> grid(n,vector<int>(n,-1));
    vector<vector<bool>> visited(n,vector<bool>(n,false));
    knightTour(grid,0,0,n,countPath,visited);
    cout<<totalPath;
}