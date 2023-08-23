#include<stdio.h>
int linearsearch(int a[],int s,int key){
    int i=0;
    while (i<s & a[i]!=key)
        i++;
    if(i==s)
        return -1;
    else
        return i+1;


}
 int main(){
    int a[]={2,4,6,7,8,9,10,3,5};
    int s=sizeof(a)/sizeof(a[0]);
    int key=10;
    int pos=linearsearch(a,s,key);
    if(pos==-1)
        printf("item not found");
    else
        printf("key %d found at position %d",key,pos);

    key=5;
    pos=linearsearch(a,s,key);
    if(pos==-1)
        printf("item not found");
    else
        printf("key %d found at position %d",key,pos);




 }
