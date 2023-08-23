
#include<stdio.h>
class Node{
public:
    int x;
    Node * parent;
    Node* right;
    Node * left;

};
class binaryTree{
public:
    binaryTree();
    Node * createNode(int [],int *,Node *);
    Node * newNode (int data);
    void prerecursive(Node*);
    void inrecursive(Node*);
    void postrecursive(Node*);
     void preorderIterative();
    void inorderIterative();
    void postorderIterative();
    int n;
Node * r;


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
    node ->right=NULL;
    return node;
}
Node * binaryTree::createNode(int a[],int *ci,Node *p)
{
    *ci=*ci+1;
    if (a[*ci]==-1)
        return NULL;
    Node *u=newNode(a[*ci]);
    n=n+1;
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
void binaryTree:: inrecursive(Node *u)
{
    if(u==NULL)
        return;
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



int main()
{
     binaryTree ob;


    int a[] = { 1,3,1,-1,-1,-1,5,4,-1,-1,6,-1,-1 };
    int ci=-1;
    Node * r=ob.createNode( a,&ci,NULL);
    printf("The tree was built successfully with the number of nodes = %d \n", ob.n);
    printf("The root of the tree is: %d \n\n", r->x);

    printf("Preorder Traversal: ");
    ob.prerecursive(r);

    printf("\nInorder Traversal: ");
    ob.inrecursive(r);

    printf("\nPostorder Traversal: ");
    ob.postrecursive(r);
}

