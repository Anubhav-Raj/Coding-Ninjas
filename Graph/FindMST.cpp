#include <bits/stdc++.h>
using namespace std;

class Disjoint
{
    vector<int> rank, parent, size;

public:
    // Constructer intial Configation
    Disjoint(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
        }
    }
    // Find ultimate Parent using (path Commpression)
    int findUPar(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }
    void unionByRank(int u, int v)
    {
        int ulp_v = findUPar(v);
        int ulp_u = findUPar(u);
        if (ulp_u == ulp_v)
        {
            return;
        }

        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    // Another Method to   implement the Union Data structuer by Size
    void unionBySize(int u, int v)
    {
        int ulp_v = findUPar(v);
        int ulp_u = findUPar(u);
        if (ulp_u == ulp_v)
        {
            return;
        }
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution
{
public:
    int spanningTreeUsingPrimsAlgorithm(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<pair<int, int>> mst;
        vector<int> visited(V, 0);

        // Create minHeap  {weight,node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        pq.push({0, 0});
        int sum = 0;
        while (!pq.empty())
        {

            auto it = pq.top();
            pq.pop();

            int weight = it.first;
            int node = it.second;
            if (visited[node] == 1)
            {
                continue;
            }
            else
            {
                visited[node] = 1;
                sum += weight;
            }
            for (auto it : adj[node])
            {
                int adjNode = it[0];
                int ewt = it[1];
                if (!visited[adjNode])
                {
                    pq.push({ewt, adjNode});
                }
            }
        }
        return sum;
    }
    // Function to find sum of weights of edges of the Minimum Spanning Tree.

    int KruskalsAlgo(int V, vector<vector<int>> adj[])
    {

        vector<pair<int, pair<int, int>>> edges;
        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                int adjNode = it[0];
                int wt = it[1];
                int node = i;
                edges.push_back({wt, {node, adjNode}});
            }
        }
        sort(edges.begin(), edges.end());
        int mst = 0;
        Disjoint ds(V);
        for (auto it : edges)
        {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;
            if (ds.findUPar(u) != ds.findUPar(v))
            {
                mst += wt;
                ds.unionBySize(u, v);
            }
        }
        return mst;
    }

    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // return spanningTreeUsingPrimsAlgorithm(V,adj[]);
        return KruskalsAlgo(V, adj);
    }
};

int main()
{
    // code hear

    return 0;
}