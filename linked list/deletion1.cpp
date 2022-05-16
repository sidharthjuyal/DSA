#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void print(node* ptr){
   while(ptr!=NULL)
   {
       cout<<"Element: "<<ptr->data<<"\n";
       ptr= ptr->next;
   }
}

int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    node* fifth = new node();

    head->data = 5;
    second->data = 6;
    third->data = 7;
    fourth->data = 8;
    fifth->data = 9;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    cout<<"\nbefore operations...\n";
    print(head);

    // deleting at beginning
    node* ptr1 = head;
    head = head->next;
    delete(ptr1);

    // deleting after a node
    node* ptr2 = third;
    second->next = fourth;
    delete(ptr2); 

   // deleting at end
   node* prev = head;
   node* last = head->next;
   while(last->next!=NULL)
   {
       prev = prev->next;
       last = last->next;
   }  
   prev->next = NULL;
   node* ptr3 = last;
   delete(ptr3);

    cout<<"\nafter operations...\n";
    print(head);
}