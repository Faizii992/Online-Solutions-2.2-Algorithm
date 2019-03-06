#include<bits/stdc++.h>



using namespace std;
int heapsize;
int n;
float a[100];
int LEFT(int i)
{
    return 2*i+1;
}
int RIGHT(int i)
{
    return 2*i+2;
}

void MINHEAPIFY(int i)
{
    int l=LEFT(i);
    int r=RIGHT(i);
    int largest=i;

    if((l<=heapsize)&&(a[l]<a[largest]))
    {
        largest=l;
    }
    else if((r<=heapsize)&&(a[r]<a[largest]))
    {
        largest=r;
    }
    if(i!=largest)
    {
        swap(a[largest],a[i]);
        MINHEAPIFY(largest);

    }



}
void BuildMax()
{
int x=heapsize/2;
    for(int i=x;i>=0;i--)
    {
        MINHEAPIFY(i);
    }
}
void Heapsort(float a[])
{ BuildMax();
    int sizee=heapsize;


for(int i=0;i<sizee;i++)
{
    swap(a[heapsize],a[0]);
    heapsize--;
    MINHEAPIFY(0);

}

}
int main()
{
    cout<<" enter heapsize "<<endl;
 int n;
 cin>>n;
 heapsize=n-1;
cout<<"Enter array elements: "<<endl;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

Heapsort(a);

cout<<"Result is: "<<endl;

for(int i=0;i<n;i++)
{
    cout<<a[i]<< " "<<endl;
}
}
