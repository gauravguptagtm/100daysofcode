#include<bits/stdc++.h>
using namespace std;

void subset(vector<int> &v,vector<int> &res,int j,int n)
{
    if(j==n)
    {
        for (auto &&i : res)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    res.push_back(v[j]);
    subset(v,res,j+1,n);
    res.pop_back();
    subset(v,res,j+1,n);
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    subset(v,res,0,n);
}