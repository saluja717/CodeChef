#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>>adj,int k)
{
    bool visited[k];
    memset(visited,false,sizeof(visited));
    queue<int>q;
    q.push(0);
    while(!q.empty())
    {
        int r=q.front();
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
    cin>>v>>e;
    vector<vector<int>>adj(v);
    for(int i=0;i<v;i++)
    {
        adj[i]=vector<int>(v);
         
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            adj[i][j]=0;
        }
    }
   
    int a,b;
    for(int i=0;i<e;i++)
    {
       cin>>a>>b;
       adj[a][b]=1;
    }
    bfs(adj,v);
    return 0;
}