#include<bits/stdc++.h>
using namespace std;

void permutation(string s,string osf)
{
    if(s.size()==0)
    {
        cout<<osf<<"\n";
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        permutation(s.substr(0,i)+s.substr(i+1),osf+s[i]);
    }
}

/*void perm_not_unique(string s,string osf)
{
    if(s.size()==0)
    {
        cout<<osf<<"\n";
        return;
    }
    unordered_set<char> a;
    for(int i=0;i<s.size();i++)
    {
        char ch =s[i];
        if(a.count(ch) == 0)
        {
            a.insert(ch);
            permutation(s.substr(0,i)+s.substr(i+1),osf+s[i]);
        }
    }
}
*/
int main(){
    string s;
    cin>>s;
    permutation(s,"");
}