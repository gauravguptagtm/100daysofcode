#include <bits/stdc++.h>
using namespace std;

class myChannel{
    public:
        int data;
        myChannel* next;
        myChannel(int Data){
            data = Data;
        }
        void getinfo(){
            cout << data << endl;
            cout << next << endl;
        }
};

int main(){
    int mydata = 34;
    myChannel* Cname = NULL;
    Cname = new myChannel(21);
    cout << Cname->data << endl;
    cout << Cname->next << endl;
    myChannel* Cname = NULL;
    Cname = new myChannel(22);
    cout << Cname->data << endl;
    cout << Cname->next;
    return 0;
}