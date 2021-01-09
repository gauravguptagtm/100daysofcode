#include<bits/stdc++.h>
using namespace std;

int power(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    int temp=power(a,b/2);
    if(b%2==0)
    {
        return temp*temp;
    }
    else{
        return a*temp*temp;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int result = power(a,b);
    cout<<result;
}