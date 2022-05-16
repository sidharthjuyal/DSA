#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* head = NULL;

// insert
void print()
{
    while(head!=NULL){
    cout<<"Element: "<<head->data<<"\n";
    head=head->next;
    }
}

void push(int data){
   node* new_node = new node();
   new_node->data= data;
   new_node->next= head;

   head = new_node;
}

void insertAfter(node* ptr, int data)
{
    node* new_node = new node();
    new_node->data = data;
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void append(int data)
{
    node* new_node = new node();
    new_node->data = data;
    new_node->next= NULL;
     node* last = head;

     if(head == NULL)
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


// deletion at beginning
void popHead()
{
    node* ptr = head;
    head = head->next;
    delete(ptr);
}

// deletion at a given place
void popAfter(node* index)
{
    node* ptr = index->next;
    index->next = index->next->next;
    delete(ptr);
}

// deletion at the end
void popEnd()
{
   node* p = head;
   node* q = head->next;
   while(q->next!=NULL)
   {
       q = q->next;
       p = p->next;
   }
   p->next = NULL;
   node* ptr = q;
   delete(ptr);
}

int main()
{
    push(5);
    push(4);
    append(7);
    append(8);
    insertAfter(head->next,6); 

    cout<<"\nafter deleting....\n";
    popHead();
    popAfter(head->next);
    popEnd();
    print();
}