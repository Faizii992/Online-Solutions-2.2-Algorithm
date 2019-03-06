
#include<bits/stdc++.h>
#define true 1
#define false 0
using namespace std;
vector < int > visited;
vector < int > adj[10];
queue < int > q;
int dest;
int node,edge;
vector < int > dist;
void BFS(int s)
{

    cout<<"-------------------"<<endl;
    puts("");
   dist.assign(node,0);


    visited[s]=true;
q.push(s);
cout<<s<< " "<<endl;
 dist[s]=0;
while(!q.empty())
{

int u=q.front();
q.pop();
//cout<<u<<" ";
for(int i=0;i<adj[u].size();i++)
{




    if(visited[adj[u][i]]==false)
    {
        visited[adj[u][i]]=true;
        //distance[adj[u][i]]=distance[u]+1;
        dist[adj[u][i]]=dist[u]+1;
        //cout<<dist[adj[u][i]]<<"LOLOLOL"<<endl;
        q.push(adj[u][i]);
        cout<<adj[u][i]<<" ";
    }
}
}
puts("");

cout<<"distance of "<<s<<" from "<<dest<<" is "<<dist[dest]<<endl;

}
int main()
{

   cout<<"Enter node and edge: "<<endl;
    cin>>node>>edge;

cout<<"Enter two connected :"<<endl;
for(int i=0;i<edge;i++)
{
    adj[i].clear();
    //visited[i]=false;
    //distance[i]=0;
}

for(int i=0;i<edge;i++)

{

    int a,b;
    cin>>a>>b;
    for(int i=0;i<edge;i++)
    {
        adj[a].push_back(b);
         adj[b].push_back(a);

    }

}

int s;
cout<<"Enter dest: "<<endl;
cin>>dest;
for(int i=0;i<node;i++)
{
    visited.assign(node,false);
    BFS(i);
}


}


