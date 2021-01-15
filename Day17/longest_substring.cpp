#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int res=0,i=0;
	    int n=s.size();
	    vector<int> index(256,-1);
	    for(int j=0;j<n;j++)
	    {
	        i=max(i,index[s[j]]+1);
	        res=max(res,j-i+1);
	        index[s[j]] = j; 
	    }
	    cout<<res<<"\n";
	}
	return 0;
}