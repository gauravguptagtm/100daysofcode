#include<bits/stdc++.h>
using namespace std;

void subset(int arr[],int i,int n,string osf)
{
    if(i==n)
    {
        cout<<"["<<osf<<"]\n";
        return;
    }
    subset(arr,i+1,n,osf+" "+to_string(arr[i]));
    subset(arr,i+1,n,osf);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    subset(arr,0,n,"");
}