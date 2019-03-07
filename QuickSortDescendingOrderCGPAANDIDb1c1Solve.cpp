#include<bits/stdc++.h>


using namespace std;


struct Info
{
    char s[10];
    int x;
};
int partition(struct Info a[],int hi,int lo)
{
int pivot=a[hi].x;
int i=lo-1;

for(int j=lo;j<hi;j++)
{

if(a[j].x<=pivot)
{
    i++;
    swap(a[i],a[j]);
}
}
swap(a[i+1],a[hi]);
return i+1;


}


void QuickSort(struct Info a[],int hi,int lo)
{
    if(hi>lo)
    {
        int pi=partition(a,hi,lo);
        QuickSort(a,pi-1,lo);
        QuickSort(a,hi,pi+1);
    }
}
int main()
{
    struct Info a[100];
cout<<"Enter no of components :"<<endl;
int n;
cin>>n;
cout<<"Enter array elements :"<<endl;
for(int i=0;i<n;i++)
{
    cin>>a[i].s>>a[i].x;


}
int hi=n-1;
int lo=0;

QuickSort(a,hi,lo);
cout<<"After : "<<endl;

for(int i=0;i<hi;i++)
{
    for(int j=i+1;j<hi-1;j++)
    {
         if(a[i].x==a[j].x)
        {
           if(strcmp(a[i].s,a[j].s)<0)
            {

             swap(a[i],a[j]);
            }
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<a[i].s<<"    "<<a[i].x<<endl;


}


}
