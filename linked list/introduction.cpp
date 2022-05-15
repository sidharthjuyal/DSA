// linked list creation and access
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void linkedListTraversal(Node* ptr)
{
    while(ptr!=NULL)
    {
   cout<<ptr->data<<" ";
   ptr = ptr->next;
    }
}

int main()
{
  Node* head;
  Node* second;
  Node* third;

// dynamic memory allocation
  head = new Node;
  second = new Node;
  third = new Node;

// link first and second node
  head->data = 7;
  head->next = second;
// link second and third node
  second->data = 8;
  second->next = third;
// terminating list at the third node
  third->data = 9;
  third->next = NULL;

  linkedListTraversal(head);

  return 0;
}
