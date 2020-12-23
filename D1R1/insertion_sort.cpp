#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int> v={2,7,4,1,9,3,9,7,15,72,12,34};
    int i, key, j;
    for (i = 1; i < v.size(); i++)
    {
        key = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}