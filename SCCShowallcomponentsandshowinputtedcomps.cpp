#include<bits/stdc++.h>
#define true 1
#define false 0
#define white 0
#define grey 1
 using namespace std;
 int node,edge;
 vector < int > adj[10];
 vector < int > revadj[10];
 stack < int > stck;
 int color[100];
 int x;
 int mark=-1;
 vector < int > scc[100];
 int visited[100];
 void DFS(int s)
 {

     color[s]=grey;
     for(int i=0;i<adj[s].size();i++)
     {
         if(color[adj[s][i]]==white)
         {
             DFS(adj[s][i]);
         }
     }
     stck.push(s);
 }

  void DFS2(int s)
 {

     scc[mark].push_back(s);

     cout<<s<<endl;


     visited[s]=true;
     for(int i=0;i<revadj[s].size();i++)
     {
         if(visited[revadj[s][i]]==false)
         {
             DFS2(revadj[s][i]);
         }
     }
     //stck.push(s);
 }
 int main()
 {
     cout<<"Enter node and edge: "<<endl;
     cin>>node>>edge;
     for(int i=0;i<edge;i++)
     {
         adj[i].clear();
         revadj[i].clear();
     }
     cout<<"Enter two vertices: "<<endl;
     for(int i=0;i<edge;i++)
     {
         int a,b;
         cin>>a>>b;

         adj[a].push_back(b);
         revadj[b].push_back(a);
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

             cout<<"Component no :"<<mark+1<<" has the following components :"<<endl;
x=0;
             DFS2(u);
         }
     }


     int x;
     cout<<"Enter the comp to find "<<endl;
     cin>>x;
     for(int i=0;i<scc[x-1].size();i++)
     {
         cout<<scc[x-1][i]<<" "<<endl;

     }
 }
