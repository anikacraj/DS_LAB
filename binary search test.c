#include<stdio.h>
int binarysearch(int a[],int s,int key,int b,int e){
    int m;
    if(b>e)
        return -1;
    else{
        m=(b+e)/2;

         if(a[m]==key)
            return m+1;
        else if(key>a[m])
                binarysearch( a, s, key,m+1,e);
        else
            binarysearch(a,s,key,b,m-1);

    }

}

int main(){
    int a[]={2,4,5,6,8,9,45};
    int s=sizeof(a)/sizeof(a[0]);
    int key=6;
    int pos=binarysearch(a,s,key,0,s-1);

    if(pos==-1)
        printf("key not found");
    else
        printf("key%d found at %d",key,pos);

}

