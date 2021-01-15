#include<bits/stdc++.h>
using namespace std;

string duplicate(string s,string osf,string f_index)
{
    if(s.size()==0)
    {
        return osf;
    }
    if(s[0]!=s[1] && s[0] != f_index[0])
    {
        return duplicate(s.substr(1),osf+s[0],s.substr(0,1));
    }
    else{
        return duplicate(s.substr(1),osf,s.substr(0,1));
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        string a= duplicate(s,"","");
        cout<<a;
    }
}