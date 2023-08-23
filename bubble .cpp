#include<stdio.h>
int bubble(int a[],int s)
{
    int j,i,temp;
    for(i=0;i<=s-2;i++)
    {
        for(j=s-1;j>=i+1;j--)
        {
            if (a[j]<a[j-1])
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
    int a[]={10,9,8,2,12,5,13,4,3,1,0,};
    int s=sizeof(a)/sizeof(a[0]);
    int i;
    bubble(a,s);

    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }

}
