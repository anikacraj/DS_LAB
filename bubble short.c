#include<stdio.h>
void bubblesort(int a[],int s){

    int i,j,temp;
    for(i=0;i<=s-2;i++){
        for(j=s-1;j>=i+1;j--) {
            if(a[j]>a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main(){
    int a[]={5,9,4,2,7,3,8};
    int s=sizeof(a)/sizeof(a[0]);
    printf("UNSORTED ARRY->");
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }


    bubblesort(a,s);

    printf("\n\nSORTED ARRY->");
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }

}
