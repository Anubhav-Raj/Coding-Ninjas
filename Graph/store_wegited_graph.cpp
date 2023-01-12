#include <bits/stdc++.h>
using namespace std;
 int main(){
// code hear
      int n,m;
       cin>>n>>m;

       //Using martrix
        int arr[n+1][n+1];
         for ( int i = 0; i < m; i++)
         {
             int u,v,w; // w is weigth
              cin>>u>>v>>w;
               arr[u][v]=w;
                arr[v][u]=w;
               
         }

         // using Adjecent list store  wegited graph
           vector<pair<int,int>> adj[n+1];// inseted to storing only adjesent  node  store in pair
           for ( int i = 0; i < m; i++){
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
           }
           
          
 return 0;
}