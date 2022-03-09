#include<iostream>
using namespace std;

int main(){
    
    int a;
    int *p; // p is an pointer variable that points to integer meaning it stores an address of an integer.
    p = &a; // p stores address of a

    a = 5;
    cout << p << "\n";  // prints the address of a
    cout << &a << "\n"; // prints the address of a
    cout << &p << "\n"; // prints the address of p
    cout << *p << "\n"; // prints the value stored in a
    
    *p = 8; // the value in a is changed to 8
    cout << a << "\n"; // prints 8

    // p is the address of a
    // *p is the value stored in a

    struct Node{
        int data;
        Node *next;
    };

    Node *head;
    head = NULL;

    Node *new_node = new Node;
    new_node -> data = 5;
    new_node -> next = NULL;

    head = new_node;

    cout << head << "\n";
    cout << new_node << "\n";
    cout << new_node -> data << "\n"; // same as *p 


}