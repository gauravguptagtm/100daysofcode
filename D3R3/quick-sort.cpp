#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int p,int r)
{
    int key=arr[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(arr[j]<key)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void quicksort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q=partition(arr, p ,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);
    }
}
int main()
{
    int arr[]={432,8,530,90,88,11,231,45,677,199};
    int n=sizeof(arr) / sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}