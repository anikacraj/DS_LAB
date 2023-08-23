#include<stdio.h>
class arraystack{
    arraystack();
    int size();
    int get(int index);
    int set(int index,int data);
    void add(int index ,int data);
    int remove(int index);
   void __seea();

private:
    int n;
    int *a;
    int len;
    void resize();
    int prev;
    int i;

};
arraystack::arraystack()
{
    len=1;
    a=new int[len];
    n=0;

}
int arraystack::size()
{
    return n;
}
int arraystack::get(int index)
{
    return a[i];
}
int arraystack::set(int index,int data)
{
    prev=a[index];
    a[index]=data;
    return prev;
}
void arraystack::add(int index,int data)
{
    if(len==size())
        resize();
    for(i=n+1;i>=index;i--){

       a[i+1]=a[i];
    }
    a[index]=data;
    n++;
}
int arraystack::remove(int index)
{
    if(len>3*n)
        resize();
        prev=a[index];
    for(i=index;i<=n+1;i++)
    {
        a[i+1]=a[i];
        n--;
    }
}
void arraystack::resize()
{
    len=2*n;
    int max;
    max=len;
    if(max<1)
        max=1;

    int *b=new int[len];
    for(i=0;i<n;i++)
    {

        b[i]=a[i];

    }
    a=b;
}
    void arraystack::__seea()
    {
        printf("[ ");
        for(i=0;i<size();i++)
        {
         printf("%d ",a[i]);
        }
        printf("]");
    }

int main()
{
   arraystack st;
    st.add(0,10);
    st.__seea();
}
