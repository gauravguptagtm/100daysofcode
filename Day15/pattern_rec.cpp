#include<bits/stdc++.h>
using namespace std;

void pattern(int n,int i)
{
    if(n==0)
    {
        return;
    }
    if(i<n)
    {
        cout<<"* ";
        pattern(n,i+1);
    }
    else{
        cout<<endl;
        pattern(n-1,0);
    }
}

void pattern_rev(int n,int i)
{
    if(n==0)
    {
        return;
    }
    if(i<n){
        pattern_rev(n,i+1);
        cout<<"* ";
    }
    else{
        pattern_rev(n-1,0);
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern_rev(n,0);
}