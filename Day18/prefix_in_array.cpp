#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix (string arr[], int N)
{
    int min_len=INT_MAX;
    string ans="";
    // your code here
    for(int i=0;i<N;i++)
    {
        int p=arr[i].size();
        min_len=min(min_len,p);
    }
    for(int j=0;j<min_len;j++)
    {
        for(int i=1;i<N;i++)
        {
            if(arr[0][j] != arr[i][j])
            {
                if(ans.size()==0) return "-1";
                return ans;
            }
        }
        ans=ans+arr[0][j];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << longestCommonPrefix(arr,n) << "\n";
}