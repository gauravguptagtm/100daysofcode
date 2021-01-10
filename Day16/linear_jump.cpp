#include<bits/stdc++.h>
using namespace std;

void dicepath(int n,int i,string osf)
{
    //base case: valid path
    if(i==n-1)
    {
        cout<<osf<<"\n";
        return;
    }
    //base case: invalid path
    if(i>=n)
    {
        return;
    }
    //we have 6 possible ways to jump
    for(int j=1;j<=6;j++)
    {
        dicepath(n,i+j,osf+"->"+to_string(j));
    }
}

int main(){
    int n;
    cin>>n;
    dicepath(n,0,"");
}