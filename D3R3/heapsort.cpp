#include<bits/stdc++.h>
using namespace std;

void maxheapify(int arr[],int n,int i)
{
    int largest=i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && arr[l]>arr[i])
    {
        largest=l;
    }
    if(r<n && arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        maxheapify(arr,n,largest);
    }
}

void buildheap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--)
    {
        maxheapify(arr,n,i);
    }
}

void heapsort(int arr[],int n){
    buildheap(arr,n);
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        n-=1;
        maxheapify(arr,n,0);
    }
}

int main(){
    int arr[]={9,8,1,5,2,12,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}