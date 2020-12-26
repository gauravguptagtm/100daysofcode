#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="AABAACAADAABAAABAA";
    string p="AABA";
    int n=s.length();
    int m=p.length();
    for(int i=0;i<=n-m;i++)
    {
        int count=0;
        for(int j=0;j<m;j++)
        {
            if(s[i+j]==p[j])
            {
                count++;
            }
            else{
                break;
            }
        }
        if(count==m)
        {
            cout<<i<<" ";
        }
    }
}