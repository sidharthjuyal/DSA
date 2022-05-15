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

void print(Node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element: "<<ptr->data<<"\n";
        ptr = ptr->next;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 5;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data = 8;
    third->next = NULL;

    cout<<"\nbefore operations....\n";
    print(head);

    // inserting at beginning
    Node* beginning = new Node();
    beginning->data = 4;
    beginning->next = head;

    // inserting at the end
    Node* end = new Node();
    end->data = 9;
    third->next = end;
    end->next = NULL;

   // inserting in between
   Node* between = new Node();
   between->data = 6;
   head->next = between;
   between->next = second;

   cout<<"\nAfter operations....\n";
   print(beginning);    

}