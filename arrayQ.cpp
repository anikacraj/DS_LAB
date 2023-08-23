#include<stdio.h>
class arrayQ
{
    public:
    arrayQ();
    void  enq(int data);
    int deq();
    void __print();
    void resize();
private:
    int len;
    int *a;
    int n;
    int i;
    int prev;
    int k;

};
arrayQ::arrayQ()
{
    len=1;
    a=new int[len];
    n=0;
    i=0;
}
void arrayQ::enq(int data)
{
    if((n+1)>len)
        resize();
    a[(i+n)%len]=data;
    n++;
}
int arrayQ::deq()
{
    prev=a[i];
    i=(i+1)%len;
    n=n-1;
    if(len>=3*n)
    {
        resize();
    }
    return prev;

}
void arrayQ::resize()
{
    len=2*n;
    int max=len;
    if(max<1)
        max=1;
    int *b=new int [len];
    for(k=0; k<=n-1; k++)
    {
        b[k]=a[(i+k)%len];
    }
    a=b;
    i=0;
}
void arrayQ::__print()
{
    printf("[ ");
    for(k=0; k<n; k++)
    {


        printf("%d ",a[(i+k)%len]);
    }
    printf("]");
}
int main()
{
    arrayQ ob;
    ob.enq(1);
    ob.__print();
    ob.deq();

    ob.__print();

}


