#include <bits/stdc++.h>
using namespace std;

void spiral(int arr[4][5],int m,int n)
{
    int k=0,l=0; //k-starting row index, l-starting column index
    while(k<m && l<n)
    {
        for(int i=l;i<n;i++)
        {
            cout<<arr[k][i]<<" ";
        }
        k++;
        for(int j=k;j<m;j++)
        {
            cout<<arr[j][n-1]<<" ";
        }
        n--;
        if(k<m){
            for(int j=n-1;j>=l;j--)
            {
                cout<<arr[m-1][j]<<" ";
            }
            m--;
        }
        if(l<n){
            for(int j=m-1;j>=k;j--)
            {
                cout <<arr[j][l]<< " ";
            }
            l++;
        }
    }
}

int main(){
    int arr[4][5]={{1,2,3,4,1},{5,6,7,8,2},{9,10,11,12,3},{13,14,15,16,4}};
    spiral(arr,4,5);
}