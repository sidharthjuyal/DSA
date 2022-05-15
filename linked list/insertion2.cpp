// Insertion in linked list
/*
-> at beginning
-> at end
-> somewhere between
*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* head = NULL;

void print()
{
    while(head!=NULL)
    {
        cout<<"Element: "<<head->data<<"\n";
        head = head->next;
    }
}

// at beginning
void push(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = head;

    head = new_node;
}

// at end
void append(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    Node* last = head;

    if(head==NULL)
    {
        head = new_node;
        return;
    }
    while(last->next!=NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

// after a node
void afterNode(Node* prev_node, int data)
{
    if(prev_node == NULL)
    {
        cout<<"\ngiven prev_node cannot be null...";
        return;
    }
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;   
}

int main()
{
    push(5);
    push(4);
    append(7);
    append(9);
    afterNode(head->next->next,6);  //see

    print();    

}