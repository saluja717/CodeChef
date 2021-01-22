//0 index is not included in the graph both 0 row and column index 
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &adj,int k,bool visited[])
{
        cout<<k<<" ";
        visited[k]=true;
        for(int i=0;i<adj.size();i++)
        {
                 if(adj[k][i]==1 && !visited[i])
                 {
                     dfs(adj,i,visited);
                 }
        }
}
int main()
{
    int v,e;
    cout<<"Enter the Vertices and Edges you want\n";
    cin>>v>>e;
    cout<<"Enter the Edges\n";
    int a,b;
    vector<vector<int>>adj(v+1);
        for(int i=0;i<v+1;i++)
         {
           adj[i]=vector<int>(v+1); 
         }
        for(int i=0;i<v+1;i++)
        {
          for(int j=0;j<v+1;j++)
          {
            adj[i][j]=0;
          }
        }
       for(int i=0;i<e;i++){cin>>a>>b;adj[a][b]=1,adj[b][a]=1;}
       for(int i=0;i<v+1;i++)
        {
        for(int j=0;j<v+1;j++)
          {
            cout<<adj[i][j]<<" ";
          }
        cout<<endl;
        }
   cout<<"From Which Element you want to start traversel\n";
   int k;
   cin>>k;
   bool visited[v+1];
   memset(visited,false,sizeof(visited));
   visited[0]=true;
   for(int i=0;i<v+1;i++)
   {
       if(!visited[i])
       {
         dfs(adj,k,visited);
       }
   }
}
