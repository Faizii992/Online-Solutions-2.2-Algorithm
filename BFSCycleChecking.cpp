#include<bits/stdc++.h>
#define true 1
#define false 0
using namespace std;
int node,edge;
vector < int > adj[10];
vector< int > color;
queue< int > que;
vector < int > visited;
vector < int > parent;
int a=0;
void BFS(int s)
{
    cout<<"-------"<<endl;
    visited[s]=true;
cout<<s<<endl;
    que.push(s);
    while(!que.empty())
    {
        int u=que.front();
        que.pop();


        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==false)
            {
                que.push(adj[u][i]);
                cout<<adj[u][i]<<endl;
                parent[adj[u][i]]=u;
                visited[adj[u][i]]=true;
            }
            else
            {
                if(parent[u]!=adj[u][i])
                {
                    a=1;

                }
            }
        }
    }

}
int main()
{
    cin>>node>>edge;
    visited.assign(node,false);
    parent.assign(node,-1);
    for(int i=0;i<edge;i++)
    {
        adj[i].clear();
    }
    for(int i=0;i<edge;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    BFS(0);
    if(a==1)
    {
        cout<<"Cycle exists: "<<endl;
    }

}


