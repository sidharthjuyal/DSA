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
    cout<<"\n";
}

// insert at beginning...
Node* insertAtFirst(Node* head, int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

// insert in between
Node* insertAtIndex(Node* head, int data, int index)
{
    Node* new_node = new Node();
    Node* p = head;
    while(index>0)
    {
        p=p->next;
        index--;
    }
    new_node->data=data;
    new_node->next= p->next;
    p->next = new_node;
    return head;
}

// insert at end
Node* insertAtEnd(Node* head, int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if(head==NULL)
    {
        head=new_node;
        return new_node;
    }
    else{
        Node* last = head;
        while(last->next!=NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        return head;
    }
}

int main()
{
  Node* head;
  Node* second;
  Node* third;
  Node* fourth;

// dynamic memory allocation
  head = new Node;
  second = new Node;
  third = new Node;
  fourth = new Node;

  head->data = 6;
  head->next = second;
  second->data = 8;
  second->next = third;
  third->data = 9;
  third->next = fourth;
  fourth->data = 10;
  fourth->next = NULL;

  linkedListTraversal(head);

  head = insertAtFirst(head,5);  //updating head with new value with new node which is inserted at the first position
  head = insertAtIndex(head,99,2);  //updating head with new value with new node which is inserted after the 2nd index
  head = insertAtEnd(head,100);  //updating head with new value with new node which is inserted at the end.
  linkedListTraversal(head);

  return 0;
}