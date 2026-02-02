#include <iostream>
using namespace std;
// Class for linked list
class Node{
     public:
    // data member
    int data;
    Node *next;
    // defining constructor
   
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }


};
// function to print the entire LinkedList
void print(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        // print the data
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"end of Linked List";
    
}
int main() {
            Node n1(3);
            Node n2(2);
            Node n3(1);
            Node n4(3);
            Node n5(4);
            // creating the Link
            n1.next = &n2;
            n2.next = &n3;
            n3.next =&n4;
            n4.next =&n5;
            // printing the ll with the help of head node
            Node *head;
            head =&n1; //pointer of 8 bytes
            print(head);
            print(head);

    return 0;
}