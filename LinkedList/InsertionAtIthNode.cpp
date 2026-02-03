#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// function for creating Node at runtime
// it will return head of the Linked List
Node *inputFromTail()
{
    cout << "give the List Item\n";

    int data;
    cin >> data;
    // creating head and tail
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {

            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
// length function
int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void printIthNode(Node *head, int i)
{
    int count = 1;
    if (i < 0)
    {
        cout << "-1";
        return;
    }
    // moving the head ith position ahead
    else
        while (count <= i && head)
        {
            head = head->next;
            count++;
        }
    if (!head)
    {
        cout << "-1";
        return;
    }
    else
    {
        cout << head->data << "\n";
    }
}
Node *InsertAtIthPos(Node *&head, int i, int data)
{
    Node *newHead = head;
    if (i < 0)
        return head;
    Node *n = new Node(data);
    if (i < 0)
        return head;
    if (i == 0)
    {
        n->next = head;
        head = n;
        return head;
    }
    // jumpint i-1 times
    int count = 1;
    // returning the newHead

    while (count < i && head)
    {
        head = head->next;
        count++;
    }
    if (head)
    {
        n->next = head->next;
        head->next = n;
    }
    else
        cout << "\n-1\n";
    return newHead;
}
// deleting the ith Node
Node *deleteIthNode(Node *head, int i)
{
    Node *newHead = head;
    if (i < 0)
        return head;
    if (i == 0 && head)
        {
            Node *temp = head->next;
            head->next=NULL;
            delete(head);
            
            return temp;}
    int count = 1;
    while (count < i && head)
    {
        head = head->next;
        count++;
    }
    // we should check condition for whatever we are returning and accessing
    if (head && head->next)
    {
           Node *temp = head->next;
        head->next = temp->next;
        // isolate the node
        temp->next=NULL;
        delete(temp);
    }
    return newHead;
}
int main()
{
    Node *head = inputFromTail();
    print(head);
    int i;
    cout << "enter the index \n";
    cin >> i;
    // printIthNode(head,i);
    // cout << "enter the position you want to insert the element\n";

    // int n;
    // cin >> n;
    // int data;
    // cout << "enter the data \n";
    // cin >> data;
    // head = InsertAtIthPos(head, i, data);
    head = deleteIthNode(head, i);
    print(head);

    return 0;
}