#include<bits/stdc++.h>
using namespace std;


int ans=0;
bool isItSafe(vector<vector<bool>> &grid,int row,int cols,int n)
{
    for(int i=row-1;i>=0;i--){
        if(grid[i][cols]) return false;
    }
    for(int i=row-1, j=cols-1;i>=0 and j>=0; i--,j--)
    {
        if(grid[i][j]) return false;
    }
    for(int i=row-1,j=cols+1;i>=0 and j<n; i--,j++){
        if(grid[i][j]) return false;
    }
    return true;
}

void display(vector<vector<bool>> &grid,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(grid[i][j]==true){
                cout<<"Q ";
            }
            else{
                cout<<".";
            }
        }
        cout << endl;
    }
}

void countPath(vector<vector<bool>> &grid,int curr_row,int n)
{
    if(curr_row == n){
        ans++;
        display(grid,n);
        return;
    }
    for(int j=0;j<n;j++)
    {
        if(isItSafe(grid,curr_row,j,n)){
            grid[curr_row][j] = true;
            countPath(grid,curr_row+1,n);
            grid[curr_row][j] = false;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<bool>> grid(n,vector<bool>(n,false));
    countPath(grid,0,n);
    cout<<ans;
}