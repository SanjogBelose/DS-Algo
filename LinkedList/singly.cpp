#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *address;
};

class SinglyLinkedList{

    Node *head;

    public:

    SinglyLinkedList(){
        head = NULL;
    }

    void insert(int val){

        Node *new_node = new Node; // *new_node is node like head which is storing the memory address of new Node. new Node is a telling to create a block of memory in Heap memory.
        new_node -> data = val;
        new_node -> address = NULL;

        if(head == NULL){
            head = new_node; // head is storing the address of new_node
        }
        else{
            new_node -> address = head;
            head = new_node;
        }
    }

    void remove(int val){

        if(head == NULL){
            cout << "No Elements in the Linked List" << "\n";
        }

        if(head -> address == NULL){
            if(head -> data == val){
                delete head;
                head = NULL;
            }
        }
         
    }

    bool search(int val){
        Node *temp = head;
        while(temp != NULL){
            if(temp -> data == val){
                return true;
            }
            temp = temp -> address;
        }
        return false;
    }

    void display(){

        Node *temp = head;
        while(temp != NULL){
            cout << temp -> data << "\n";
            temp = temp -> address;
        }
    }

};

int main(){

    SinglyLinkedList sl;
    sl.insert(6);
    sl.insert(9);
    sl.insert(15);
    sl.display();
    //cout << sl.search(9) << "\n";
    //sl.remove(7);
}