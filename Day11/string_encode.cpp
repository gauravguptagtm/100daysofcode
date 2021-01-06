#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string arr={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=0;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        for(int i=0;i<n;i+=4)
        {
            int k=0,l=16;
            for(int j=i;j<i+4;j++)
            {
                if(s[j]=='0')
                {
                    l=(l+k)/2;
                }
                else if(s[j]=='1')
                {
                    k=(l+k)/2;
                }
            }
            ans.push_back(arr[k]);
        }
        cout<<ans<<endl;
    }
}