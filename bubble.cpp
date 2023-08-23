#include<stdio.h>
int bubble(int a[],int s)
{
    int i,j;
    for(i=0;i<=s-2;i++)
    {
        for(j=s-1;j>=i+1;j--)
        {
            if(a[j]<a[j-1])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}

int main()
{
    int a[]={3,1,4,7,5,7,4,2,6},i;
    int s=sizeof(a)/sizeof(a[0]);
     bubble(a,s);

    for( i=0;i< s;i++)
        printf("%d ",a[i]);
}
