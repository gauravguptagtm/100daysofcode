#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int> v={2,7,4,1,9,3,9,7,15,72,12,34};
    int n=v.size(),temp;
    for(int gap=n/2;gap>=1;gap/=2)
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=j-gap;i>=0;i=i-gap)
            {
                if(v[i]<v[i+gap])
                {
                    break;
                }
                else{
                    temp=v[i];
                    v[i]=v[i+gap];
                    v[i+gap]=temp;
                }
            }
        }
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    
}