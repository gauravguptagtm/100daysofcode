#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int> > v{{1,2,3},{4,5,6}};
    vector<int> ans;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            ans.push_back(v[i][j]);
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<ans[i]<<" ";
    }
}