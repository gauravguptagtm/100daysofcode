#include<bits/stdc++.h>
using namespace std;

string division(){
    int n,num1=0,num2=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            num1+=1;
        }
        else{
            num2+=1;
        }
    }
    if(num1==0 && num2%2!=0)
    {
        return "NO";
    }
    if(num1%2!=0)
    {
        return "NO";
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string a=division();
        cout<<a<<"\n";
    }
}