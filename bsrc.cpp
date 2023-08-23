#include<stdio.h>
int bsrc(int arr[],int s,int key,int b,int e)
{
    int mid;
    if (b>e )
    return -1;
    else
    {
        mid=(b+e)/2;
        if (arr[mid]==key)
        {


            return (mid +1);
        }
        else if (arr[mid]<key)
        {
            return bsrc (arr,s,key,mid+1,e);

        }
        else
            return bsrc(arr,s,key,b,mid-1);

    }
}





int main()
{

int a[]={1,2,3,4,5,6,7,8,9};

int s=sizeof(a)/sizeof(a[0]);
int key=4;
int pos=bsrc(a,s,key,0,s-1);
if(pos==-1)
    printf(" data not found\n");
else
    printf("%d ", pos);
}
