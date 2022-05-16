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

// deletion at start
Node* popHead(Node* head)
{
   Node* ptr = head;
   head = head->next;
   delete(ptr);
   return head;
}

// deletion at end
Node* popTail(Node* head)
{
   Node* p = head;
   Node* q = head->next;
   while(q->next!=NULL)
   {
       p=p->next;
       q=q->next;
   }
   p->next = NULL;
   delete(q);
   return head;
}

// deletion at a specified index
Node* popIndex(Node* head, int index)
{
   Node* ptr = head;
   int i =0;
   while(i<index-1)
   {
       ptr=ptr->next;
       i++;
   }
   Node* deletion = ptr->next;
   ptr->next = ptr->next->next;
   delete(deletion);
   return head;
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

  head = popHead(head);   // updating head after deleting first element
  head = popTail(head);   // updating head after deleting end element
  head = popIndex(head,1);   // updating head after deleting element at the specified index
  linkedListTraversal(head);

  return 0;
}