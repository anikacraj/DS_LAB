#include<stdio.h>
void bubblelab(int a[],int s)
{
    int i;
    int j;
    int temp;
    for(i=0;i<=s-2;i++)
    {
        for(j=s-1;j>=i+1;j--){
        if(a[j]<a[j-1])
        {


            temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
    }
        }
    }
}


int main()
{
    int a[]={7,4,6,2,1,23,4,5};

     int s=sizeof(a)/sizeof(a[0]);
     bubblelab(a,s);
     int i;
     for(i=0;i<s;i++)



    // printf(" sorted array is :");
     printf("%d ",a[i]);
     printf("\n");



}
