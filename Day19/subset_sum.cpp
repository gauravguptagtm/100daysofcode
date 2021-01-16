#include<bits/stdc++.h>
using namespace std;

void subset_sum(int arr[], int x,int n,int m,int ans,string osf)
{
    if(x==ans)
    {
        cout<<osf<<" ";
        return;
    }
    if(n==m || x<ans)
    {
        return;
    }
    subset_sum(arr,x,n+1,m,ans+arr[n],osf+to_string(arr[n]));
    subset_sum(arr,x,n+1,m,ans,osf);
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    subset_sum(arr,9,0,n,0,"");
}