#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
   struct  Node *next;
    
} Node;
// function to print the Linked List
void Print(Node *head)
{
    Node *temp = head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\nend of the LinkedList\n");
}
int main()
{
Node n1;
//     Node n1;
//         n1.data = 12;
    
//     Node n2;
//         n2.data = 23;

//     Node n3;
//         n3.data = 24;
// n1.next=&n2;
// n2.next=&n3;
// n3.next=NULL;
//     Node *head = &n1;
//     Print(head);
//     Print(head);

}