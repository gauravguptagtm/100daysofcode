#include <bits/stdc++.h>
using namespace std;


void permutation(string s,string osf)
{
    if(s.size()==0)
    {
        cout<<osf<<" ";
    }
    for(int i=0;i<s.size();i++)
    {
        permutation(s.substr(0,i)+s.substr(i+1),osf+s[i]);
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    permutation(s,"");
	    cout<<"\n";
	}
	return 0;
}