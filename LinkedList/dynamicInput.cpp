#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
// function for creating Node at runtime
// it will return head of the Linked List
Node* inputFromTail(){
    cout<<"give the List Item\n";
    
    int data ;
    cin>>data;
    // creating head and tail
    Node *head=NULL ,*tail=NULL;
    while(data!=-1){
        Node *n = new Node(data);
        if(head==NULL) {
            head = n;
            tail =n;
        }else{
          
            tail->next =n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
Node* inputFromHead(){
    cout<<"give the List Item\n";
    
    int data ;
    cin>>data;
    // creating head and tail
    Node *head=NULL ,*tail=NULL;
    while(data!=-1){
        Node *n = new Node(data);
        if(head==NULL) {
            head = n;
            tail =n;
        }else{
          
           n->next=head;
           head=n;
        }
        cin>>data;
    }
    return head;
}
// printLinkedList
void print(Node *head)
{
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"End of LL\n";
}
// length function
int length(Node *head)
{
    Node *temp = head;int count=0;
    while(temp){count++;
    temp =temp->next;}
return count;
}
int main() {
Node *head1 =inputFromTail();
print(head1);
cout<<"Length of LL is "<<length(head1)<<"\n";
Node *head2 =inputFromHead();
print(head2);
    return 0;
}