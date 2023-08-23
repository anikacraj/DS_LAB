#include<stdio.h>
class Node
{
public:
    int x;
    Node *parent,*left,*right;
};

class binaryTree
{
    public:
    binaryTree();
    Node *r;
    int n;
    Node * newNode(int data);
    Node * createNode(int a[],int * ci,Node *p);
   void prerecursive(Node * );
    void inrecursive(Node *);
 void   postrecursive(Node *);
 void preorder();
 void inorder();
 void postorder();
};
binaryTree::binaryTree()
{
    r=NULL;
    n=0;
}
Node * binaryTree::newNode(int data)
{
    Node *node=new Node();
    node->x=data;
    node->parent=NULL;
    node->left=NULL;
    node->right=NULL;
    return node;

}
Node * binaryTree::createNode(int a[], int * ci,Node * p)
{
    *ci=*ci+1;
    if (a[*ci]==
        -1)
        return NULL;
        Node * u=newNode(a[*ci]);
        n++;
        if(*ci==0)
            r=u;
        u->parent=p;
        u->left=createNode(a,ci,u);
        u->right=createNode(a,ci,u);
        return u;

    }
    void binaryTree::prerecursive(Node * u)
    {
        if(u==NULL)
            return ;
        printf("%d ",u->x);
        prerecursive(u->left);
        prerecursive(u->right);
    }
    void binaryTree::inrecursive(Node *u)
    {
        if(u==NULL)
            return ;
        inrecursive(u->left);
         printf("%d ",u->x);
         inrecursive(u->right);

    }
    void binaryTree::postrecursive(Node *u)
    {
        if(u==NULL)
            return ;
        postrecursive(u->left);
        postrecursive(u->right);
         printf("%d ",u->x);
    }

  void binaryTree :: preorder()
 {
     Node * u=r;
     Node *prev=NULL;
     Node * next;
     while(u!=NULL)
     {
         if(prev==u->parent)
         {
             printf("%d ",u->x);
             if(u->left!=NULL)
                next=u->left;
             else if (u->right!=NULL)
                next=u->right;
             else
                next=u->parent;
         }
         else if(prev==u->left)
         {
             if(u->right!=NULL)
                next=u->right;
             else
                next=u->parent;
         }
         else
            next=u->parent;
         prev=u;
         u=next;
     }
 }
  void binaryTree :: inorder()
 {
    if(r==NULL)
    return ;
     Node * u=r;
     Node *prev=NULL;
     Node * next;
     while(u!=NULL)
     {
         if(prev==u->parent)
         {

             if(u->left!=NULL){
                next=u->left;
             }
             else{
            printf("%d ",u->x);
           if ( u->right!=NULL)
                next=u->right;
             else
                next=u->parent;
         }
         }
         else if(prev==u->left)
         {
             printf("%d ",u->x);
             if(u->right!=NULL)
                next=u->right;
             else
                next=u->parent;
         }
         else
            next=u->parent;
         prev=u;
         u=next;
     }
 }
  void binaryTree :: postorder()
 {
    if(r==NULL)
    return ;
     Node * u=r;
     Node *prev=NULL;
     Node * next;
     while(u!=NULL)
     {
         if(prev==u->parent)
         {

             if(u->left!=NULL){
                next=u->left;
             }
             else if(u->right!=NULL){
           next=u->right;
             }

             else
                  printf("%d ",u->x);
                next=u->parent;
         }

         else if(prev==u->left)
         {

             if(u->right!=NULL)
                next=u->right;
             else
               printf("%d ",u->x);
                next=u->parent;
         }
         else
         {


              printf("%d ",u->x);
            next=u->parent;
         }
         prev=u;
         u=next;
     }
 }


int main()
{
    binaryTree ob;
       int a[] = {2,3,1,-1,-1,-1,5,4,-1,-1,6,-1,-1};
       int ci=-1;
        Node *r =ob.createNode(a, &ci, NULL);
//printf("The tree was build successfully with number of nodes = %d\n", ob.n);
  //  printf("The root of the tree is: %d\n\n", r->x);

        printf("pre::");
        ob.prerecursive(r);
         printf("\n\n in::");
        ob.inrecursive(r);
         printf("\n\n post::");
        ob.postrecursive(r);
        printf(" \n \n pre ite:");
        ob.preorder();
        printf(" \n \n in  ite:");
        ob.inorder();
         printf(" \n \n post ite:");
        ob.postorder();
}
