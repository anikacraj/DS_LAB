#include<stdio.h>
int linearlab(int a[],int s,int key)
{
    int i=0;
    while(i<s & a[i]!=key)
        i++;
    if(s==i)
        return -1;
    else
        return i+1;
}
int main()
{
    int a[]={1,3,4,5,6,87,8};
    int s=sizeof(a)/sizeof(a[0]);
    int key;
    printf(" enter your no:");
    scanf("%d",&key);
    int pos=linearlab(a,s,key);
    if(pos==-1)
        printf("not found");
    else
        printf("pos at %d",pos);
}
