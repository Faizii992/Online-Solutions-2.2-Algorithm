#include<bits/stdc++.h>
static int heapsize;
using namespace std;
struct Info
{
    char s[10];
    int x;
};

int LEFT(int i)
{
    return 2*i+1;
}
int RIGHT(int i)
{

    return 2*i+2;
}
int MAX_HEAPIFY(struct Info a[],int i )
{
    int largest=i;

    int l=LEFT(i);
    int r=RIGHT(i);
    if((l<=heapsize)&&(strcmp(a[largest].s,a[l].s)<0))
       {
           largest=l;
       }
       if((r<=heapsize)&&(strcmp(a[largest].s,a[r].s)<0))
       {
           largest=r;
       }
       if(i!=largest)
        {
            swap(a[i],a[largest]);
             MAX_HEAPIFY(a,largest);
        }

}

void BUILDMAXHEAP(struct Info a[])
{ int x=heapsize/2;
    for(int i=x;i>=0;i--)
    {
        MAX_HEAPIFY(a,i);
    }
}
int HEAPSORT(struct Info a[])
{  BUILDMAXHEAP(a);
    int sizea=heapsize;

    for(int i=0;i<sizea;i++)
    {
        swap(a[0],a[heapsize]);
        heapsize--;
        MAX_HEAPIFY(a,0);
    }

}
int main()
{ int n=5;
struct Info a[10];

heapsize=n-1;
printf("Enter array elements:");
for(int i=0;i<n;i++)
{
   cin>>a[i].s;
   cin>>a[i].x;

}
printf("The array after sorting is:");
HEAPSORT(a);
for(int i=0;i<n;i++)
{
    cout<<a[i].s<<"   "<<a[i].x<<endl;

}

}
