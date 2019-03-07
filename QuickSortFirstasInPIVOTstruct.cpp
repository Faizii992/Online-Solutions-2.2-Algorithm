#include<bits/stdc++.h>

using namespace std;

struct Info
{
    char s[100];
    int x;

};
int partition(struct Info a[],int hi,int lo)
{
    int pivot=a[lo].x;
    int i=hi;
    for(int j=hi;j>lo;j--)
    {
        if(a[j].x<=pivot)
        {

            swap(a[j],a[i]);
            i--;

        }
    }
    swap(a[lo],a[i]);
    return i;

}

void QuickSort(struct Info a[],int hi,int lo)
{//cout<<"Hi"<<endl;

    if(hi>lo)
    {
        int p=partition(a,hi,lo);
        QuickSort(a,p-1,lo);
        QuickSort(a,hi,p+1);
    }
}

int main()
{
    struct Info a[10];

    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;

    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].s>>a[i].x;

    }
QuickSort(a,n-1,0);
    cout<<"After : "<<endl;
 for(int i=0;i<n;i++)
    {
        cout<<a[i].s<<"    "<<a[i].x<<endl;

    }
}
