#include<bits/stdc++.h>
using namespace std;

bool isRotated(string str1, string str2)
{
    int i=0,ans=str2.size();
    if(str1.size() != str2.size())
    {
        return false;
    }
    if(str1.size()==1)
    {
        if(str1==str2)
        {
            return true;
        }
        return false;
    }
    //for clockwise rotation
    if(str1[i]==str2[i+2] && str1[i+1]==str2[i+3])
    {
        for(int j=i+2;j<ans;j++)
        {
            if(str1[j]!=str2[(j+2)%ans]){
                return false;
            }
        }
        return true;
    }
    //for anti-clockwise rotation
    if(str1[i]==str2[ans-2] && str1[i+1]==str2[ans-1])
    {
        for(int j=i;j<ans-2;j++)
        {
            if(str1[j+2]!=str2[j])
            {
                return false;
            }
        }
        return true;
    }
    return false;
}


int main(){
    string str1,str2;
    cin>>str1>>str2;
    bool ans=isRotated(str1,str2);
    if(ans==true)
    {
        cout<<1;
    }
    else{
        cout<<0;
    }
}