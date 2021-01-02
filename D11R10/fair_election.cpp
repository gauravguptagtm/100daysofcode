#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum1=0,sum2=0,count=0;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
            sum1+=arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
            sum2+=arr2[i];
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        int i=0,j=m-1,a=0;
        while(sum1<sum2)
        {
            sum1=sum1-arr1[i]+arr2[j];
            sum2=sum2-arr2[j]+arr1[i];
            swap(arr1[i],arr2[j]);
            count+=1;
            i++;
            j--;
            if(i==m)
            {
                a=1;
                break;
            }
        }
        if(a==1)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<count<<" ";
        }
    }
}