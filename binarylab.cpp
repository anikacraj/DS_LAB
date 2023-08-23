#include<stdio.h>
int binarylab(int a[],int s,int key,int b,int e)
{
    int m;
    if(b>e)
    {
        return -1;
    }
    else
    {
        m=(b+e)/2;
        if(a[m]==key)
            return m+1;
        else if(key>a[m]){
            return binarylab(a,s,key,m+1,e);
        }
        else
            return binarylab(a,s,key,b,m-1);
    }

}



int main()
{
    int a[]={1,3,5,6,7,8,9};
    int s=sizeof(a)/sizeof(a[0]);
    int key;
    printf("enter your no:");
    scanf("%d",&key);
    int pos=binarylab(a,s,key,0,s-1);
    if(pos==-1)
    printf("not found");
    else
        printf("found at %d",pos);

}
