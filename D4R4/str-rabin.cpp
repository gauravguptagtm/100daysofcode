#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="ABAAABAABAAA";
    string p="BAA";
    int n=s.length();
    int m=p.length();
    int hp=0,hs=0,d=26;
    for(int i=0;i<m;i++)
    {
        hp=(d*hp+int(p[i]));
        hs=(d*hs+int(s[i]));
    }
    for(int i=0;i<=n-m;i++)
    {
        if(hp==hs)
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
        else{
            hs=d*(hs-int(s[i])*pow(d,m-1))+int(s[i+m]);
        }
    }
}