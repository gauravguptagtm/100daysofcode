#include<bits/stdc++.h>
using namespace std;

void permutation_recursive(string s,int i,int n)
{
    if(i==n-1)
    {
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.size();j++)
    {
        swap(s[i],s[j]);
        permutation_recursive(s,i+1,n);
        swap(s[i],s[j]);
    }
}

int main(){
    string s;
    cin >> s;
    permutation_recursive(s,0,s.size());
}