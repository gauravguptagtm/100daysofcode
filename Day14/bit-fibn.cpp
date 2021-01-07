#include<bits/stdc++.h>
using namespace std;


int countbit(int n)
{
    if(n==1) return 2;
    if(n==2) return 3;
    return countbit(n-1)+countbit(n-2);
}
int main(){
    int n;
    cin>>n;
    int ans=countbit(n);
    cout<<ans<<"\n";
}