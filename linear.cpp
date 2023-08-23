#include<stdio.h>
int linear(int a[],int s,int key)
{
    int i=0;
    while(i<s & a[i]!=key)
    {
        i=i+1;
    }
    if(i==s)
        return -1;
    else
        return i+1;
}


int main()
{
    int a[]={2,5,3,6,7,21,456,76,34,223};
    int s=sizeof(a)/sizeof(a[0]);
    int key=0;
    int pos=linear(a,s,key);
    if(pos==-1)
    {
        printf("not found");
    }
    else
        printf("found at =%d",pos);
}
