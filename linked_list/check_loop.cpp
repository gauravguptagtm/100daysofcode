#include<bits/stdc++.h>
#include "linkedlist.h"

bool check_loop(Node *head){
    Node* temp=head;
    set<Node*> s;
    while(temp != NULL){
        if(s.find(temp) != s.end()){
            return true;
        }
        s.insert(temp);
        temp = temp->next;
    }
    return false;
}

int main(){
    Node* head = NULL;
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* four = NULL;
    head = new Node();
    first = new Node();
    second = new Node();
    third = new Node();
    four = new Node();
    head->data = 20;
    first->data = 30;
    second->data = 40;
    third->data = 50;
    four->data = 60;
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = first;
    cout << check_loop(head);
    return 0;
}