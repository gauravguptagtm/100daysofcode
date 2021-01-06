#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    int current_sum=arr[0];
    int t_sum=arr[0];
    for(int i=1;i<n;i++)
    {
        current_sum=max(arr[i],current_sum+arr[i]);
        if(current_sum>t_sum)
        {
            t_sum=current_sum;
        }
    }
    return t_sum;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout << maxSubarraySum(a,n) << endl;
    }
}