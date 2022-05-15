// linked list creation and access
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// traversal
void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << "\n";
        ptr = ptr->next;
    }
}

// creation
void createNode(Node *ptr, int data, Node *next)
{
    ptr->data = data;
    ptr->next = next;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    // dynamic memory allocation
    head = new Node();
    second = new Node();
    third = new Node();

    // link first and second node
    createNode(head, 7, second);
    // link second and third node
    createNode(second, 8, third);
    // terminating list at the third node
    createNode(third, 9, NULL);

    linkedListTraversal(head);

    return 0;
}