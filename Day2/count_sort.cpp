#include<bits/stdc++.h>
using namespace std;

int max_ele(vector<int> arr,int n)
{
    int k=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            k=arr[i];
        }
    }
    return k;
}

void countsort(vector<int> &arr,int n){
    int k=max_ele(arr,n);
    int b[n];
    int count[k+1]={ };
    for(int i=0;i<n;i++)
    {
        count[arr[i]]+=1;
    }
    for(int i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        count[arr[i]]=count[arr[i]]-1;
        b[count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=b[i];
    }
}

int main(){
    vector<int> arr={2,7,4,1,7,15,72,12,34};
    int n=arr.size();
    countsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}