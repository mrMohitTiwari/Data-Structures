#include <iostream>
using namespace std;
// createing a class for linked list node
// node implementation for singly ll
class node
{
public:
    int data;
    node *next;
    // constructor
    node()
    {
        int data = -1;
        next = nullptr;
    }
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
    node(int data, node *next)
    {
        this->data = data;
        this->next = next;
    }
};
// creating a function input which can create a ll from scratch and return the head of the linked list
node *input()
{
    // creating the first head of the linked list
    int x;
    node *head = nullptr;
    node *tail = nullptr;
    cout << "Enter the head node of the linked list \n";
    cin >> x;
    while (x != -1)
    {
       
        if (!head)
        {
            head = new node(x);
            tail = head;
        }
        else
        {
            node *t = new node(x);
            tail->next = t;
            tail = t;
        }
         cin >> x;
    }
    return head;
    
}
// function to print the linked list
void print(node *h)
{
    while (h)
    {
        cout << h->data << " -> ";
        h = h->next;
    }
}
int main()
{
    node* head = input();
    print(head);
    return 0;
}