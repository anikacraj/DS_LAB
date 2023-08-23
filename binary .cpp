#include<stdio.h>
int bsrc(int a[],int s,int key ,int b,int e)
{
    int mid ;
    if(b>e)
        return -1;
    else
        mid=(b+e)/2;
    if( key==a[mid])
        return mid +1;
    else if (key>a[mid])
        return bsrc(a,s,key,mid+1,e);
    else
        return bsrc(a,s,key,b,mid-1);
}


int main()
{
    int a[]={1,3,5,7,9,12,34,56};
    int s=sizeof (a)/ sizeof (a[0]);
    int key=34;
    int pos=bsrc(a,s,key,0,s-1);
    if(pos==-1)
        printf("not found");
    else
        printf(" position is :%d",pos);
}
