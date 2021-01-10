#include<bits/stdc++.h>
using namespace std;

void lexico(int n,int i)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<"\n";
    //0->1->10->11->2->3.... ;n=11
    for(int j=(i==0)?1:0;j<=9;j++)
        lexico(n,i*10+j);
}

int main(){
    int n;
    cin>>n;
    lexico(n,0);
}