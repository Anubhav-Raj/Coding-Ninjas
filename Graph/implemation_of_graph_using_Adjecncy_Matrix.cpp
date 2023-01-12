#include <bits/stdc++.h>
using namespace std;
     void print( int **edges, int n, int sv, bool *visited , vector<int> &ans){
     
       ans.push_back(sv);
       visited[sv]=true;
        for(int i=0;i<n;i++){
             if(sv==i){
                 continue;
             } 
              if( edges[sv][i]==1){
                  if(visited[i]){
                     continue;
                  }
                   print( edges,n,i,visited,ans);
              }
        }
         
  }
int main()
{
    // code hear
    int n,e;
    cin >> n >> e;
    // Dynamically allocating  row  space in heap
    int** edge = new int*[n];
    // Dynamically allocating column space in heap
    for (int i = 0; i < n; i++)
    {
        edge[i] = new int[n];
        for (int j = 0; j< n; j++)
        {
            edge[i][j] = 0;
        }
    } 
  

    // Taking input in the 2D array
    for (int i = 0; i<e; i++)
    {
        int f,s;
        cin >> f >> s;
        edge[f][s] = 1;
        edge[s][f] = 1;
    }
      
       bool* visited=   new bool[n];
        for( int i=0;i<n;i++){
             visited[i]= false;
        }
         vector<int>ans;
     print(edge,n,2,visited, ans);
       
   
    for( int i=0;i<ans.size();i++){
       cout<< ans[i]<<" ";
 }

    return 0;
}