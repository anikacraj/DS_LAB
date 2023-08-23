#include<stdio.h>
class Node
{
public:
    int data;
    int *next;

};
class SLList
{
    SLList();
    void push(int y);
    int pop();
    void enq(int x);
    int deque();
    Node * newNode(int x);
    int __print();
private:
    int prev;
    int n;
    Node *head;
    Node*tail;

};
SLList::SLList()
{
    n=0;
    head=NULL;
    tail=NULL;

}
Node* SLList::newNode(int x)
{
    Node *node=new Node();
    node->data=x;
    node->next=NULL;
    return node;
}
void SLList::push(int x)
{
    Node *u=newNode(x);
            u->next = head;
    head=u;
    if (n==0)
        tail=u;
    n++;
}











int main()
{

}
