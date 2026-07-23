#include <iostream>
using namespace std;
// creating node for doubly linked list
class node
{
public:
    int data;
    node *prev, *next;
    // creating the constructors
    // default constructor
    node()
    {
        this->data = -1;
        next = NULL;
        prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
    node(int data, node *p, node *n)
    {
        this->data = data;
        prev = p;
        next = n;
    }
};
// function for taking input i doubly linked list
node *input()
{
    node *head = NULL;
    node *tail = head;
    int x;
    cout << "Enter the first element for doubly LL\n";
    cin >> x;
    while (x != -1)
    {

        if (!head)
        {
            node *t = new node(x);
            head = t;
            tail = head;
        }
        else
        {
            node *t ;
           t = new node(x);
            t->prev = tail;
           tail->next = t;
            tail = t;
        }
        cin >> x;
    }
    return head;
}
// print
void print(node *h)
{
    while (h)
    {
        cout << h->data << " -> ";
        h = h->next;
    }
    cout << "\n";
}

int main()
{
    node *head = input();
    print(head);
    return 0;
}