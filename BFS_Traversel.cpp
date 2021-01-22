#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> &adj,int k,bool visited[])
{
    queue<int> q;
    q.push(k);
    visited[k]=true;
    while(!q.empty())
    {
        int r= q.front();
        cout<<r<<" ";
        q.pop();
        for(int i=0;i<adj.size();i++)
        {
           if(adj[r][i]==1 && !visited[i])
           {
               q.push(i);
               visited[i]=true;
           }
        }
    }
}
int main()
{
    int v,e;
    cout<<"Enter the Vertices And Edges you want\n";
    cin>>v>>e;
    int a,b;
    vector<vector<int>> adj(v+1);
    for(int i=0;i<=v;i++){ adj[i]=vector<int>(v+1);}
    bool visited[v+1];
    memset(visited,false,sizeof(visited));
    visited[0]=true;
    cout<<"Enter the Edges\n";
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    cout<<"From where you want to start\n";
    int k;
    cin>>k;
    bfs(adj,k,visited);
    return 0;
}