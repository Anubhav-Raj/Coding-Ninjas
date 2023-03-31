
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
int main()
{
    // code hear

    // Disjoint ds(7);
    // ds.unionByRank(1, 2);
    // ds.unionByRank(2, 3);
    // ds.unionByRank(4, 5);
    // ds.unionByRank(6, 7);
    // ds.unionByRank(5, 6);
    // // cheack 3&7 belong to same  component  or not

    // if (ds.findUPar(3) == ds.findUPar(7))
    // {
    //     cout << "In Same Component" << endl;
    // }
    // else
    // {
    //     cout << "Not in same Component" << endl;
    // }

    // ds.unionByRank(3, 7);

    // if (ds.findUPar(3) == ds.findUPar(7))
    // {
    //     cout << "In Same Component" << endl;
    // }
    // else
    // {
    //     cout << "Not in same Component" << endl;
    // }

    // By Size
    Disjoint ds(7);
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);
    // cheack 3&7 belong to same  component  or not

    if (ds.findUPar(3) == ds.findUPar(7))
    {
        cout << "In Same Component" << endl;
    }
    else
    {
        cout << "Not in same Component" << endl;
    }

    ds.unionBySize(3, 7);

    if (ds.findUPar(3) == ds.findUPar(7))
    {
        cout << "In Same Component" << endl;
    }
    else
    {
        cout << "Not in same Component" << endl;
    }

    return 0;

    // Time complex is O(4 alpha)  almost equal to O(1);
}