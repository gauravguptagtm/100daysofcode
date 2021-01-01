#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <vector<int>> v{ {1,2,3},
                            {4,5,6},
                            {7,8,9} };
    vector<vector<int>> temp(3,vector<int> (3));
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            temp[j][i]= v[i][j];
        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout << temp[i][j]<<" ";
        }
    }
    return 0;
}

