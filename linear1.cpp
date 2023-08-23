#include<stdio.h>
int linear(int a[],int key, int s)
{
    int i=0;

    while (i<s & a[i]!=key)
    {
         i=i+1;
    }
    if (i==s)
        return -1;
    else
        return i+1;
}





int main()
{
    int a[]={2,4,5,7,8,9,0,1};
    int s=sizeof(a)/sizeof(a[0]);
    int key=7;
    int pos=linear(a,s,key);
    if(pos==-1)
        printf("data not found");
    else
        printf(" %d is data found at position=%d ",key,pos);
}
