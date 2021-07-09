#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void display(){
    struct Node* ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

void swapelement(struct Node **head){
    struct Node *temp,*temp1,*temp2,*temp3,*curr;
    temp3=*head;
    cout<<temp3->data;
    if(temp3->next==NULL){
        display();
    }
    else if(temp3->next->next==NULL){
        temp=temp3;
        temp1=temp3->next;
        temp->next=temp1->next;
        temp1->next=temp;
        temp3=temp1;
    }
    else{
        temp=temp3;
        temp1=temp3->next;
        cout<<temp3->data;
        temp->next=temp1->next;
        temp1->next=temp;
        *head=temp1;
        temp2=temp;
        cout<<temp3->data;
        while(temp->next!=NULL){
            temp=temp->next;
            temp1=temp->next;
            temp->next=temp1->next;
            temp1->next=temp;
            temp2->next=temp1;
            temp2=temp;
        }
        cout<<temp3->data;
    }
    curr=*head;
    cout<<curr->data;
    while(temp3!=NULL)
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
}

int main(){
    int n; cin>>n;
    head=new Node;
    int a; cin>>a;
    head->data=a;
    struct Node* ptr;
    ptr=head;
    while(n>1)
    {
        cin>>a;
        ptr->next=new Node;
        ptr=ptr->next;
        ptr->data=a;
        n--;
    }
    swapelement(&head);
}