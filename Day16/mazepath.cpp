#include<bits/stdc++.h>
using namespace std;

int countpath;

void mazepath(int n,int m,int i,int j,string osf)
{
    //base case: reach last index of matrix
    if(i==n-1 && j==m-1)
    {
        cout<<osf<<"\n";
        countpath++;
        return;
    }
    //return if index increases
    if(i>=n || j>=m)
    {
        return;
    }
    //traverse to right one step
    mazepath(n,m,i+1,j,osf+"R");
    //traverse to down one step
    mazepath(n,m,i,j+1,osf+"D");
    //add diagonal path too
    mazepath(n,m,i+1,j+1,osf+"->");
}


int main(){
    int n,m;
    cin>>n>>m;
    mazepath(n,m,0,0,"");
    cout<<countpath<<"\n";
}
