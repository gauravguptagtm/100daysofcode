#include<bits/stdc++.h>
using namespace std;

void rotate_matrix(int mat[4][4], int N, int m)
{
    for (int i=0; i<N/2; i++)
    {
        for (int j=i; j<N-i-1; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[N-1-j][i];
            mat[N-1-j][i] = mat[N-1-i][N-1-j];
            mat[N-1-i][N-1-j] = mat[j][N-1-i];
            mat[j][N-1-i] = temp;
        }
    }
}

int main(){
    int n=4;
    int m=4;
    int arr[4][4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    rotate_matrix(arr,n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}