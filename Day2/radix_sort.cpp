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

void count_sort(vector<int> &arr, int pos,int n)
{
    int b[n];
    int count[10]={ };
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]+=1;
    }
    for(int i=1;i<10;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        count[(arr[i]/pos)%10]=count[(arr[i]/pos)%10]-1;
        b[count[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=b[i];
    }
}
void radix(vector<int> &arr, int n)
{
    int k=max_ele(arr,n);
    for(int pos=1;k/pos>0;pos*=10)
    {
        count_sort(arr,pos,n);
    }
}

int main(){
    vector<int> arr={432,8,530,90,88,231,11,45,677,199};
    int n=arr.size();
    radix(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}