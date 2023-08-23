#include<stdio.h>
class Node
{
public:
    int data;
    Node *next;
};
class SLList{
public:
    SLList();
    void push(int x);
    int pop();
    void enq(int data);
    int deq();
  Node* newNode(int x);
  void __print();
private:
    int n;
   Node *head;
   Node *tail;
    int prev;

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
    u->next=head;
    head=u;
    if(n==0)
        tail=u;
    n++;

}
int SLList::pop()
{
    if(n==0)
        return NULL;
    prev=head->data;
    head=head->next;
    n--;
    if(n==0)
        tail=NULL;
    return prev;
}
void SLList::enq(int x)
{
    Node *u=newNode(x);
    if (n==0)
    {
        head=u;
    }
    else
        tail->next=u;
    tail=u;
    n++;

}
int SLList::deq()
{
    return pop();
}
void SLList::__print()
{
    Node *u=head;
    printf("[");
    while(u!=NULL)
    {
        printf("  %d",u->data);
        u=u->next;
    }
    printf("] total elements = %d",n);
    printf("\n");
    }

int main()
{
 SLList ob;
 ob.push(10);
 ob.push(20);
 ob.push(30);
 ob.__print();
 ob.pop();
 ob.pop();
 ob.__print();
 ob.enq(40);
 ob.enq(50);
 ob.__print();
 ob.deq();
 ob.__print();



}
