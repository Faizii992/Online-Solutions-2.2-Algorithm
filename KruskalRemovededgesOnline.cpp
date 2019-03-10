#include<bits/stdc++.h>


using namespace std;
int node,edge;
int cost=0;
//vector < int > adj[10];
 pair < int , pair < int ,int > >  adj[10];
int parent[10];
int findpar(int i)
{
    if(parent[i]==i)
    {
        return i;

    }
    else
        findpar(parent[i]);
}

void unionn(int x,int y)
{
    int a=findpar(x);
    int b=findpar(y);
    parent[a]=parent[b];
}

void kruskal()
{
    for(int i=0;i<edge;i++)
    {


    int x=adj[i].second.first;
    int y=adj[i].second.second;
    int z=adj[i].first;

    if(findpar(x)!=findpar(y))
    {


    cost+=z;
    unionn(x,y);
cout<<x<<"-----"<<y<<endl;


    }
    else
    {
        cout<<"Not needed: "<<endl;
        cout<<x<<"----"<<y<<endl;
    }


    }
}
int main()
{
cin>>node>>edge;
for(int i=0;i<node;i++)
{
    parent[i]=i;
}

for(int i=0;i<edge;i++)
{
    int a,b,c;
    cin>>a>>b>>c;
    adj[i]=make_pair(c,make_pair(a,b));

}
sort(adj,adj+edge);


kruskal();

}
