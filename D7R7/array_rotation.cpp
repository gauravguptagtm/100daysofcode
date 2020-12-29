#include <bits/stdc++.h>
using namespace std;

//Block-swap algo
void swap(int arr[],int i,int j,int k,int n)
{
    while(i<j && k<n)
    {
        swap(arr[i],arr[k]);
        i++;
        k++;
    }
}

void rotate(int arr[],int d,int n)
{
    if(d==0 || n==d)
    {
        return;
    }
    if(n-d==d)
    {
        swap(arr,0,d,d,n);
    }
    else if(d<n-d)
    {
        swap(arr,0,d,n-d,n);
        rotate(arr,d,n-d);
    }
    else{
        swap(arr,0,n-d,d,n);
        rotate(arr+n-d,d-(d-n),n-d);
    }
}

//Method 4
/*
void reverse(int arr[],int i,int j)
{
    while(i<j)
    {
        swap(arr[i],arr[j-1]);
        i++;
        j--;
    }
}

void rotateArr(int arr[], int d, int n){
    reverse(arr,0,d);
    reverse(arr,d,n);
    reverse(arr,0,n);
}*/

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    rotate(arr,2,n);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] <<" ";
    }
}