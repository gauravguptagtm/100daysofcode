#include<bits/stdc++.h>
using namespace std;

bool sort_check(int arr[],int i,int n)
{
    if(n==1)
    {
        return true;
    }
    if(n==i)
    {
        return true;
    }
    if(arr[i]<arr[i+1])
    {
        return sort_check(arr,i+1,n);
        //return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool a=sort_check(arr,0,n);
    cout<<a;
}