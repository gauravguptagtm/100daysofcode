#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10,b=11;
    int *p=&a;
    int *r=&b;
    cout<<*p+r<<endl;
    cout<<a<<endl;
    cout<<p<<endl; //address of p
    //p++;
    cout<<*p<<endl; //random value
    cout<<a<<endl; //10
    printf("%p",a);

    /*int **q=&p;
    cout<<*&q<<endl; // address of p
    cout<<&*q<<endl; //address of p
    cout<<&p<<endl; //address of p
    cout<<**q<<endl; //value of a
*/
    int arr[4]={2,3,4,5};
    int *q=arr;
    //printf("%p",arr);
    size_t t;
    cout<<(t);
    for(int i=0;i<4;i++){
        printf("%d\n",i[q]);
    }
}