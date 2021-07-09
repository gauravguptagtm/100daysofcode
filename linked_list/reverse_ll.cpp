#include<bits/stdc++.h>
#include "linkedlist.h"

Node* reverse(Node* head){
    if(head->next == NULL){
        return head;
    }
    Node* p = head;
    Node* q = head->next;
    Node* r = q->next;
    p->next=NULL;
    while(r!=NULL){
        q->next=p;
        p=q;
        q=r;
        r=r->next;
    }
    q->next = p;
    head = q;
    return head;
}

int main(){
    Linkedlist ll;
    ll.create();
    ll.head = reverse(ll.head);
    ll.display();
    return 0;
}