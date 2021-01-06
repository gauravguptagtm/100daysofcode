#include<bits/stdc++.h>
using namespace std;

string card(int w,int h,int n){
    int ans1=1,ans2=1;
    if(n==1)
    {
        return "YES";
    }
    int i=0,j=0;
    if(w%2!=0 && h%2!=0)
    {
        return "NO";
    }
    while(w%2==0)
    {
        ans1+=pow(2,i);
        w=w/2;
        i+=1;
        if(ans1==n)
        {
            return "YES";
        }
    }
    while(h%2==0)
    {
        ans2+=pow(2,j);
        h=h/2;
        j+=1;
        if(ans2==n)
        {
            return "YES";
        }
    }
    if((ans1*ans2)>=n)
    {
        return "YES";
    }
    return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        string a=card(w,h,n);
        cout<<a<<"\n";
    }
    return 0;
}