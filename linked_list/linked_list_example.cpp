#include<bits/stdc++.h>
#include "linkedlist.h"
using namespace std;

int main()
{
    int pos;
    Linkedlist linkedlist;
    linkedlist.create();
    linkedlist.display();
    cout << "Number of nodes in Linkedlist: " << linkedlist.count << endl;
    linkedlist.inset_at_beg(44);
    linkedlist.display();
    cout << "Number of nodes in Linkedlist: " << linkedlist.count << endl;
    cout << "Enter pos where you want to insert: ";
    cin >> pos;
    linkedlist.insert_at_mid(22,pos);
    linkedlist.display();
    linkedlist.delete_at_beg();
    linkedlist.display();
    cout << "Number of nodes in Linkedlist: " << linkedlist.count << endl;
    linkedlist.delete_at_end();
    linkedlist.display();
    cout << "Number of nodes in Linkedlist: " << linkedlist.count << endl;
    linkedlist.delete_at_pos(4);
    linkedlist.display();
    cout << "Number of nodes in Linkedlist: " << linkedlist.count << endl;
    return 0;
}