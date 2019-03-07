#include<bits/stdc++.h>
#include<string>
#define false 0
#define true 1
#define white 0
#define grey 1

using namespace std;
int mark=-1;
int node,edge;
int color[100];
int visited[100];
stack < int > stck;
vector <int > adj[100];
vector <int > reverseadj[100];
vector < int > scc[100];
map < string,int> mp;

void DFS(int source)
{
    color[source]=grey;

    for(int i=0;i<adj[source].size();i++)
    {

        if(color[adj[source][i]]==white)
        {
        DFS(adj[source][i]);
        }
    }

    stck.push(source);

}
void DFS2visit(int source)
{
    scc[mark].push_back(source);
    visited[source]=true;
cout<<source<<endl;
    for(int i=0;i<reverseadj[source].size();i++)
    {
        if(visited[reverseadj[source][i]]==false)
        {


        DFS2visit(reverseadj[source][i]);
    }
    }

    //stck.push(source);

}
int main()
{
    cout<<"Enter node and edge : "<<endl;
    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        adj[i].clear();
        color[i]=white;
        visited[i]=false;
        reverseadj[i].clear();
    }
    cout<<"Enter the nodes: "<<endl;
    for(int i=0;i<node;i++)
    { string a;
        cin>>a;
        mp[a]=i;
    }
    cout<<"Enter two vertices: "<<endl;
    for(int i=0;i<edge;i++)
    {
    string a,b;
    cin>>a>>b;
     adj[mp[a]].push_back(mp[b]);
     reverseadj[mp[b]].push_back(mp[a]);


//cout<<mp[a]<<" "<<mp[b]<<endl;

        //adj[a].push_back(b);
       // reverseadj[b].push_back(a);
    }



    for(int i=0;i<node;i++)
    {
        if(color[i]==white)
        {
            DFS(i);
        }
    }

    while(!stck.empty())
    {
        int u=stck.top();
        stck.pop();
//cout<<u<<endl;
        if(visited[u]==false)
        {

            mark++;
            cout<<"Elements of comp no : "<<mark+1<<endl;
            puts("");
            DFS2visit(u);
        }
    }
    cout<<"no of connected comps : "<<mark+1;
    puts("");


}
