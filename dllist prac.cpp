#include<stdio.h>
class Node
{
public:
    int x;
    Node *prev, *next;
};
class dllist
{
public:
    dllist();
    int get(int );
    int set(int ,int );
  void add(int ,int );
    int remove(int );
    void __print();
private :
    int n;
    int prev;
    Node *dummy;
    Node *newNode(int );
    Node *getNode(int );
    Node *addBefore(Node * ,int );
    void removeNode(Node*);


};
dllist::dllist()
{
    n=0;
    dummy =newNode(NULL);
    dummy->prev=dummy;
    dummy->next=dummy;
}
Node *dllist::newNode(int data)
{
    Node *node=new Node();
    node->x=data;
    node->next =NULL;
    node->prev=NULL;
    return node;
}
Node*dllist::getNode(int i)
{
    Node *p;
    if(i<(n/2))
    {
        p=dummy->next;
        for(int j=0;j<i;j++)
        {
            p=p->next;
        }
    }
    else
    {
        p=dummy;
        for(int j=0;j<n-i;j++)
        {
            p=p->prev;
        }
    }
    return p;

}
int dllist::get(int i)
{
    return getNode(i)->x;
}
int dllist:: set (int i,int x)
{
    Node *u=getNode(i);
    prev=u->x;
    u->x=x;
    return prev;
}
Node*dllist::addBefore(Node *w,int x)
{
    Node *u=newNode(x);
    u->prev=w->prev;
    u->next=w;
    u->next->prev=u;
    u->prev->next=u;
    n++;
    return u;
}
void dllist::add(int i,int x)
{
      addBefore(getNode(i),x);
}
void dllist::removeNode(Node *w)
{
    w->prev->next=w->next;
    w->next->prev=w->prev;
    n=n-1;
}
int dllist::remove(int i)
{
   Node* u=getNode(i);
   prev=u->x;
   removeNode(u);
   return prev;
}
void dllist::__print()
{
    Node *index=dummy->next;
    printf("[ " );
    while(index!=dummy)
    {
        printf("%d ",index->x);
        index=index->next;
    }
    printf("]");

}
int main()
{
  dllist ob;
  ob.__print();
  printf(" after adding :");
  ob.add(0,10);
  ob.add(0,50);
  ob.add(0,60);
  ob.add(0,70);



  ob.add(1,20);
  //ob.add(2,30);
 // ob.add(3,40);
  ob.__print();

  printf("\n After set operation:");
  ob.set(1,5);
  ob.__print();
  printf("\n get:%d ",ob.get(0));
  //ob.__print();

   printf("\nRemoved(2): %d",ob.remove(2));


}
