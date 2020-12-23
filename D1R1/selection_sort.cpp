#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int> v={2,7,4,1,7,15,72,12,34};
    int temp;
    for(int i=0;i<v.size();i++)
    {
        int mini=v[i];
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<mini)
            {
                temp=mini;
                mini=v[j];
                v[j]=temp;
            }
        }
        v[i]=mini;
    }
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}