/*
 LeetCode  question No:210
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void BFS(vector<vector<int>> &adj, vector<int> &visited, vector<int> &indegree, queue<int> &q, vector<int> &ans)
    {

        while (!q.empty())
        {
            int top = q.front();
            q.pop();
            ans.push_back(top);

            for (auto it : adj[top])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }
    }
    vector<int> findOrder(int numCourses, vector<vector<int>> &edges)
    {
        // creating adjecent node
        vector<vector<int>> adj(numCourses);
        for (int i = 0; i < edges.size(); i++)
        {
            // adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> ans;
        int V = numCourses;
        vector<int> indegree(V, 0); // no. of incomming edge from a paticular node
        vector<int> visited(V, 0);

        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                indegree[it]++;
            }
        }

        vector<int> vis(V, 0);
        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        BFS(adj, vis, indegree, q, ans);
        if (ans.size() == numCourses)
            return ans;

        ans.clear();

        return ans;
    }
};