#include<stdio.h>
#include<stdexcept>
class adq
{
public:
    adq();
    int get(int i);
    int set(int i,int x);
    void add(int i,int x);
    int remove(int i);
    void __printa();
private:
    void resize();
    int len;
    int n;
    int j;
    int k;
    int *a;
    int prev;
    void__indexvaliditycheek(int i);
    };
    adq::adq()
    {
         len=4;
         a=new int[len];
         j=0;
         n=0;

    }
     int adq::get(int i)
     {
         return a[(j+i)%len];
     }
     int adq::set(int i,int x)
     {
         prev=a[(j+i)%len];
         a[(j+i)%len]=x;
         return x;
     }
     void adq::add(int i,int x)
     {
         if(n=len)
         {


            resize();
         }
         if(i<n/2)
         {
             j=(j-1)%len;
             for(k=0;k>=i-1;k++)
             {
                 a[(j+k)%len]=a[(j+k+1)%len];
             }
         }
         else
            for(k=n;k>=i+1;k--)
         {
             a[(j+k)%len]=a[(j+k-1)%len];

         }
         a[(j+i)%len]=x;
         n++;

     }
     int adq::remove(int i)
     {
         prev=a[(j+i)%len];
         if(i<n/2){
    for(k=0;k>=1;k--)
    {
        a[(j+k)%len]=a[(j+k-1)%len];
        }
        j=(j+1)%len;
     }

     else
        for(k=i;k<=n-2;k++)
     {
         a[(j+k)%len]=a[(j+k+1)%len];
         n--;
         if(len>=3*n)
            resize();
     }
     }
     void adq::resize()
     {
         len=2*n;
         int max=len;
         if(max<1)
            max=1;
         int *b=new int (len);
         for(k=0;k<n;k++)
         {
             b[k]=a[(j+k)%len];
         }
         a=b;
         j=0;
     }
     void adq::__printa()
     {
         printf("[ ");
         for(k=0;k<n;k++)
         {
             printf("%d ",a[(j+k)%len]);
         }
         printf("]");
         printf("\n");
     }





int main()
{
    adq ob;
    ob.__printa();
    ob.add(0,2);
     ob.add(0,3);
      ob.add(0,4);
      ob.__printa();



}
