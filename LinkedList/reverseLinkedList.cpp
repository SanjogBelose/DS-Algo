#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *nextAddress;
};

class LinkedList{
    Node *head;

    public:
    LinkedList(){
        head = NULL;
    }

    void insert(int val){
        Node *new_node = new Node;

        if(head == NULL){
            new_node -> data = val;
            new_node -> nextAddress = NULL;
            head = new_node;
        }
        else{
            new_node -> data = val;
            new_node -> nextAddress = head;
            head = new_node;
        }
    }

    void reverse(){
        Node *back;
        Node *mid;
        Node *front;

        back = head;
        mid = head -> nextAddress;
        head -> nextAddress = NULL;

        while(mid -> nextAddress != NULL){
            front = mid -> nextAddress;
            mid -> nextAddress = back;
            back = mid;
            mid = front;
        }

        head = front;
        front -> nextAddress = back;
    }

    void traverse(){
        Node *temp;
        temp = head;

        while(temp != NULL){
            cout << temp -> data << "\n";
            temp = temp -> nextAddress;
        }
    }
    
};


int main(){
    LinkedList ll;
    ll.insert(5);
    ll.insert(18);
    ll.insert(9);
    ll.insert(15);
    ll.traverse();
    cout << "------------------" << "\n";
    ll.reverse();
    ll.traverse();

}