int main()
{
    int i,n,a[10]={2,3,4,5,6,15,34,56,67}, pos=-1;
    printf("enter number :");
    scanf("%d",&n);
    for(i=0;i<9;i++)
    {
        if ( a[i]==n)
{


           pos=i+1;
           break;
    }
    }
    if(pos==-1)
    {


    printf("not found");
    }
    else{

    printf("the position is : %d",pos);
    }


}
