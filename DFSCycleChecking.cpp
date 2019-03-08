#include<bits/stdc++.h>
#define white 0
#define grey 1
#define black 2

using namespace std;
vector < int > adj[10];
vector < int > color;
vector < int > parent;
int node,edge;
int a=0;
void DFS(int s)
{
    color[s]=grey;
    cout<<s<<endl;
    for(int i=0;i<adj[s].size();i++)
    {
        if(color[adj[s][i]]==white)
        {
            parent[adj[s][i]]=s;
            DFS(adj[s][i]);
        }
        else
        {
            if(parent[s]!=adj[s][i])
            {
                a=1;
            }
        }
    }
    color[s]=black;
}
int main()
{ cout<<" enter n and e: "<<endl;
cin>>node>>edge;
color.assign(node,white);
parent.assign(node,-1);
for(int i=0;i<edge;i++)
{ adj[i].clear();

}
for(int i=0;i<edge;i++)
{

    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
int s=0;
cout<<"path is :" <<endl;
DFS(s);
if(a==1)
{
    cout<<"Cycle exists: "<<endl;
}
}

