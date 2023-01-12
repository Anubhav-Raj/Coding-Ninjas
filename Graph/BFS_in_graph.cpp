#include <bits/stdc++.h>
using namespace std;


class graph{
public:
  vector<int> BFS( vector<int> adj[], int v)
  {
    int vis[v] = {0};
    vis[0] = 1;
    vector<int> ans;
    queue<int> q;
    q.push(0);

    while (!q.empty())
    {
      int temp = q.front();
      q.pop();
      ans.push_back(temp);

      for (auto it : adj[temp])
      {
        if (!vis[it])
        {
          vis[it] = 1;
          q.push(it);
        }
      }
    }
     
     return ans;
  }
};

void addEdge( vector<int> adj[], int u, int v)
{

  adj[u].push_back(v);
  adj[v].push_back(u);
}
 void print( vector<int> &ans){
   
    for( int i=0;i<ans.size();i++){
       cout<< ans[i]<<" ";
    }
 }
int main()
{
  // code hear
  int n, e;
  //cin >> n >> e;
  vector<int> adj[6];
  addEdge(adj, 0, 1);
  addEdge(adj, 1, 2);
  addEdge(adj, 1, 3);
  addEdge(adj, 0, 4);
   
  graph g;
     vector<int>ans = g.BFS(adj,5);
     print(ans);

  return 0;
}