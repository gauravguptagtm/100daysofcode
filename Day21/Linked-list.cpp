#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void create(){
    struct Node* ptr,* curr;
    int info;
    ptr=new Node;
    cout<<"Enter head node data: ";
    cin>>info;
    ptr->data=info;
    head=ptr;
    string ch;
    do{
        curr=new Node;
        cout<<"Enter data for next node: ";
        cin>>info;
        curr->data=info;
        ptr->next=curr;
        ptr=curr;
        cout<<"Enter Y/N for next node: ";
        cin>>ch;
    }while(ch == "Y" or ch == "y");
    ptr->next=NULL;
}

void display(){
    struct Node* ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

void insert(int info, int pos){
    struct Node* ptr,* curr;
    ptr=new Node;
    curr=head;
    ptr->data=info;
    if(pos==0)
    {
        ptr->next=head;
        head=ptr;
        return;
    }
    int i=0;
    while(i<pos-1)
    {
        if(curr==NULL)
        {
            return;
        }
        curr=curr->next;
        i++;
    }
    ptr->next=curr->next;
    curr->next=ptr;
}


int main(){
    create();
    display();
    insert(20,6);
    display();
}