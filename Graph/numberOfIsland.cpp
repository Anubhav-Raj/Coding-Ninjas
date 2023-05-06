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
private:
    bool vaild(int nrow, int ncol, int n, int m)
    {
        return nrow >= 0 && ncol < n && ncol >= 0 && ncol < m;
    }

public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
    {
        // code here
        Disjoint ds(n * m);

        int visited[n][m];

        memset(visited, 0, sizeof visited);

        int cnt = 0;
        vector<int> ans;

        int size = operators.size();
        for (int i = 0; i < size; i++)
        {
            int row = operators[i][0];
            int col = operators[i][1];
            if (visited[row][col] == 1)
            {
                ans.push_back(cnt);
                continue;
            }
            visited[row][col] = 1;
            cnt++;

            int dr[] = {-1, 0, 1, 0};
            int dc[] = {0, 1, 0, -1};
            for (int k = 0 k < 4; k++)
            {
                int nrow = row + dr[k];
                int ncol = row + dc[k];
                if (vaild(nrow, ncol, n, m))
                {
                    if (visited[nrow][ncol] == 1)
                    {
                        int nodeno = row * m + col;
                        int adjnodeno = nrow * m + ncol;
                        if (ds.findUPar(nodeno) != ds.findUPar(adjnodeno))
                        {
                            cnt--;
                            ds.unionBySize(nodeno, adjnodeno);
                        }
                    }
                }
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};
int main()
{
    // code hear

    return 0;
}