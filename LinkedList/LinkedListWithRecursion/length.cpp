#include <iostream>
using namespace std;
// length using recursion
class Node{
    public:
    int data;
    Node *next;

};
int  length(Node *head)
{
    if(!head) return 0;
    head=head->next;
   return  1+length(head);

}
class base
{
    int a;
protected:
int c;
public:
    int b;

    void diaplay()
    {
        cout << "inside base class\n";
    }
    int geta()
    {
        return a;
    }
};
class derived : public base
{
    int b;
    void display()
    {
        cout << "inside base class\n";
        cout << "value of a is " << c;
    }
};

int main()
{

    return 0;
}