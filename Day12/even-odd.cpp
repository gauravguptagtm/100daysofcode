#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int& i : v)
        {
            cin>>i;
        }
        sort(v.rbegin(),v.rend());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(v[i]%2==0)
                {
                    ans+=v[i];
                }
            }
            else{
                if(v[i]%2==1)
                {
                    ans-=v[i];
                }
            }
        }
        if(ans==0)
        {
            cout<<"Tie\n";
        }
        else if(ans>0){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
}