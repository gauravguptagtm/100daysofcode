#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class Linkedlist{
    public:
    Node* head;
    int count;
    Linkedlist(){
        head = NULL;
        count = 0;
    }
    bool isEmpty(){
        if(count == 0){
            return true;
        }
        else{
            return false;
        }
    }
    void add_node(int n){
        Node* temp = new Node();
        temp->data = n;
        temp->next = NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            Node* temp1 = head;
            while(temp1->next != NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
        count++;
    }
    void create(){
        int n;
        string ch;
        cout << "Enter the value of head node: ";
        cin >> n;
        add_node(n);
        cout << "Press Y/y to enter next node: ";
        cin >> ch;
        while(ch == "Y" or ch == "y"){
            cout << "Enter the value of next node: ";
            cin >> n;
            add_node(n);
            cout << "Press Y/y to enter next node: ";
            cin >> ch;
        }
    }
    void display(){
        if(isEmpty()){
            cout << "No nodes..." << endl;
        }
        Node* temp=head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void inset_at_beg(int n){
        Node* newNode = new Node();
        newNode->data = n;
        newNode->next = NULL;
        if(head==NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
        count++;
    }
    void insert_at_end(int n){
        add_node(n);
    }
    void insert_at_mid(int n, int pos){
        if (pos>count+1){
            cout << "Please provide a valid input between 1 and " << count << endl;
        }
        else if(pos == 1){
            inset_at_beg(n);
        }
        else if(pos == count+1){
            insert_at_end(n);
        }
        else{
            Node* newNode = new Node();
            newNode->data = n;
            Node* temp = head;
            int currPos = 1;
            while(currPos<pos-1){
                temp=temp->next;
                currPos++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            count++;
        }
    }
    void delete_at_beg(){
        if(isEmpty()){
            cout << "Linkedlist is empty..." << endl;
        }
        else{
            head = head->next;
            count--;
        }
    }
    void delete_at_end(){
        if(isEmpty()){
            cout << "LinkedList is empty..." << endl;
        }
        else if(count==1){
            head = NULL;
            count--;
        }
        else{
            Node* temp = head;
            while(temp->next->next!=NULL){
                temp = temp->next;
            }
            free(temp->next);
            temp->next = NULL;
            count--;
        }
    }
    void delete_at_pos(int pos){
        if(isEmpty()){
            cout<<"Empty..." << endl;
        }
        else if(pos > count){
            cout << "Enter pos between 1 and "<< count <<endl;
        }
        else if(pos == count){
            delete_at_end();
        }
        else if(pos==1){
            delete_at_beg();
        }
        else{
            Node* temp = head;
            int currPos=1;
            while(currPos<pos-1){
                temp=temp->next;
                currPos++;
            }
            temp->next = temp->next->next;
            free(temp->next);
            count--;
        }
    }
};
