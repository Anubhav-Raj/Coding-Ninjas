/*
A directed graph of V vertices and E edges is given in the form of an adjacency list adj. Each node of the graph is labelled with a distinct integer in the range 0 to V - 1.

A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node.

You have to return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.

*/


//Approch 1 using DFS
class Solution {
  public:
bool DFS(int sv, vector<int> adj[], vector<int> &pathVisited,vector<int>&visited,vector<int> &cheak){
    
     visited[sv]=1;
      pathVisited[sv]=1;
      
       for(auto it:adj[sv]){
            if(visited[it]==0){
                 if(DFS(it,adj,pathVisited,visited,cheak)==true){
                         
                      return true;
                 }
                
            } else if(pathVisited[it]){
                  
                 return true;
            }
             
       }
        cheak[sv]=1;
        pathVisited[sv]=0;
        return false;
   }
  
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
       vector<int> safeNode;
        vector<int> cheak(V,0);
       vector<int>pathVisited(V,0);
       vector<int>visited(V,0);


         for( int i=0;i<V;i++){
              if(!visited[i])
            DFS(i,adj,pathVisited,visited,cheak);
         }
         // if cheak ==1 Consider a Safe node
        for( int i=0;i<V;i++){
             if(cheak[i]==1)
                safeNode.push_back(i);
        }
        
         return safeNode;
    }
};

//Approch 2 Using TopoSort (BFS)

class Solution {
  public:

    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int> indegree(V,0);
         vector<int> visited(V,0);
          vector<int> ans;
          
          //First step is Reverse the Adjeceny List
          vector<int> adjRev[V];
           for( int i=0;i<V;i++){
                for( auto it:adj[i]){
                adjRev[it].push_back(i);
                 indegree[i]++;
                    
                }
           }
           
          queue<int> terminal_node;
           for( int i=0;i<indegree.size();i++){
                 if(indegree[i]==0){
                      terminal_node.push(i);
                 }
           }
           
            while(!terminal_node.empty()){
                  int  top= terminal_node.front();
                   terminal_node.pop();
                  ans.push_back(top);
                  for( auto it: adjRev[top]){
                       
                       indegree[it]--;
                        if(indegree[it]==0){
                             terminal_node.push(it);
                        }
                  }  
                   
            }
             sort(ans.begin(),ans.end());
             return ans;
          
    }