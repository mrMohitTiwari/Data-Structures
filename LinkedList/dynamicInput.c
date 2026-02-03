#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *input()
{
    int data;
    scanf("%d", &data);
    Node *head = NULL, *tail = NULL;

    while (data != -1)
    {
        // create a fresh node
        Node *n = (Node *)malloc(sizeof(Node));
        n->data = data;
        // if no item added yet
        if (!head)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        scanf("%d", &data);
    }
    return head;
}
void Print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\nend of the LinkedList\n");
}
int main()
{
    Node *head = input();
    Print(head);
}