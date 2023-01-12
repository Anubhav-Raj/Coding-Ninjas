#include <bits/stdc++.h>
using namespace std;


void PrintDFS(int **edges, int n, int sv, bool *visited, vector<int> &ans){
   ans.push_back(sv);
    visited[sv] = true;
    for (int i = 0; i < n; i++)
    {
        if (sv == i)
        {
            continue;
        }
        if (edges[sv][i] == 1)
        {
            if (visited[i])
            {
                continue;
            }
            PrintDFS(edges, n, i, visited, ans);
        }
    }
}

 void DFS( int ** edge, int n){
   bool *visited=   new bool[n];
    for( int i=0;i<n;i++){
         visited[i]= false;
    }
     vector<int> ans;
    for( int i=0;i<n;i++){
          if(!visited[i]){
            PrintDFS(edge, n, i, visited, ans);
          }
    } 
    delete []visited;
    cout<<"DFS :"<<endl;
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    } 
 }

//Print for BFS
void  PrintBFS( int **edges,int n, int sv, bool *visited){
      queue<int> pandingVertix;
       
          pandingVertix.push(sv);
           visited[sv]= true;
           while (!pandingVertix.empty())
           {
             int currentVertix= pandingVertix.front();
             pandingVertix.pop();
              cout<<currentVertix<<" ";
                for( int i=0;i<n;i++){
                     if(sv==i){ 
                         continue;
                     }
                     if(edges[currentVertix][i]==1 && !visited[i]){
                          pandingVertix.push(i);
                          visited[i]=true;
                     }
                }
           }
            //delete [] visited;
 }
void BFS( int ** edge, int n){
 bool *visited=   new bool[n];
    for( int i=0;i<n;i++){
         visited[i]= false;
    }
     
     for( int i=0;i<n;i++){
          if(!visited[i]){
            PrintBFS(edge, n, i,visited);
          }
     } 
      delete []visited;
  }
 int main(){

  // code hear
    int n, e;
    cin >> n >> e;
    // Dynamically allocating  row  space in heap
    int **edge = new int *[n];
    // Dynamically allocating column space in heap
    for (int i = 0; i < n; i++)
    {
        edge[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edge[i][j] = 0;
        }
    }

    // Taking input in the 2D array
    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edge[f][s] = 1;
        edge[s][f] = 1;
    }
     
      DFS(edge,n);
      cout<<endl;
      cout<<"BFS :"<<endl;
      BFS(edge,n);
 return 0;
}