//ways to go in a party either alone or in a pair n friends
#include<bits/stdc++.h>
using namespace std;


int count(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==2) return 2;
    return count(n-1)+(n-1)*count(n-2);
}

int main(){
    int n;
    cin>>n;
    int result= count(n);
    cout<<result;
}