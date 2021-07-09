#include<bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};
class linkedlist {
    public:
    Node* head = Node(1);
    void add_node(int n){
        Node newnode = Node(n);
        Node* temp = &head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = &newnode;
    }

    void printList()
    {
        while (head.next != NULL) {
            cout << head.data << " ";
            head = *head.next;
        }
        cout << head.data << " ";
    }
};


int main()
{
    linkedlist l_list;
    l_list.printList();
    l_list.add_node(12);
    l_list.printList();
	return 0;
}

